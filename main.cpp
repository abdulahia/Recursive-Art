#include "CTurtle.hpp"   //This brings in the CTurtle library for use
#include <iostream> //for input & output
#include <random> //needed for Getrandom
#include <chrono> //needed for Getrandom's seed
namespace ct = cturtle;  //This makes it possible to use the CTurtle commands using ct::
using namespace std;

class Getrandom {
	/** Uses <random> and <chrono> from C++11 to return a random integer in range [1..size] */
public:
	Getrandom(int size) {
		auto seed = chrono::system_clock::now().time_since_epoch().count(); //gets a new seed for the randomness
		default_random_engine generator(seed);			//seeds our randomness
		uniform_int_distribution<int> intdist(1, size); //a distibution to make each in-range integer equally likely
		self_rand_int_ = intdist(generator);			//generates the randme number
	}
	int roll() {
		return self_rand_int_;
	}
private:
	int self_rand_int_;
};

void draw_rectangle(ct::Point a, ct::Point b, ct::Point c, ct::Point d, ct::Turtle& myTurtle) {
        Getrandom rant(6);
        const string colormap[] = { "blue", "red", "green", "white", "yellow", "violet", "orange" };
        string color = colormap[rant.roll()];
    myTurtle.fillcolor(color);
    myTurtle.penup();
    myTurtle.goTo(a.x, a.y);
    myTurtle.pendown();
    myTurtle.begin_fill();
    myTurtle.goTo(b.x, b.y);
    myTurtle.goTo(c.x, c.y);
    myTurtle.goTo(d.x, d.y);
    myTurtle.goTo(a.x, a.y);
    myTurtle.end_fill();
    }
    
    void mondrian(ct::Point a, ct::Point b, ct::Point c, ct::Point d, ct::Turtle& myTurtle){

    draw_rectangle(a,b,c,d, myTurtle);
    
    // The recursive mondrian function that holds all the steps found above.


    int width = b.x - a.x;
    cout << "\nHere is the width: " << width << endl;
    int height = a.y - d.y;
    cout << "\nHere is the height: " << height << endl;
    
    Getrandom ran(width);
    Getrandom other_ran(height);
    int randx = ran.roll() + a.x;
    int randy = other_ran.roll() + d.y;

    if (width > 800/2 && height > 600/2){
      mondrian(a, { randx, a.y }, { randx, d.y }, { d.x, d.y }, myTurtle);
      mondrian({a.x, randy},{b.x, randy},{c.x, c.y} , {d.x, d.y}, myTurtle);
      mondrian({ randx,a.y}, b , c , { randx, d.y}, myTurtle);
      mondrian({ a.x, a.y }, { b.x, b.y }, { c.x, randy }, { d.x, randy }, myTurtle);

    }
    else if (width > 800/2){
        mondrian(a, { randx, a.y }, { randx, d.y }, { d.x, d.y }, myTurtle);
        mondrian({ randx,a.y }, b, c, { randx, d.y }, myTurtle);
    }
    else if (height > 600/2){
    mondrian({ a.x, randy }, { b.x, randy }, { c.x, c.y }, { d.x, d.y }, myTurtle);
    mondrian({ a.x, a.y }, { b.x, b.y }, { c.x, randy }, { d.x, randy }, myTurtle);
    }
   else if (width > 60 && height > 60){
        //mondrian(a, { randx, a.y }, { randx, d.y }, { d.x, d.y }, myTurtle);
        //mondrian({ a.x, randy }, { b.x, randy }, { c.x, c.y }, { d.x, d.y }, myTurtle);
        //mondrian({ randx,a.y }, b, c, { randx, d.y }, myTurtle);
        //mondrian({ a.x, a.y }, { b.x, b.y }, { c.x, randy }, { d.x, randy }, myTurtle);
   }
   else if(width > 150){
        //mondrian(a, { randx, a.y }, { randx, d.y }, { d.x, d.y }, myTurtle);
        //mondrian({ randx,a.y }, b, c, { randx, d.y }, myTurtle);
   }
   else if(height > 150){
        //mondrian({ a.x, randy }, { b.x, randy }, { c.x, c.y }, { d.x, d.y }, myTurtle);
        //mondrian({ a.x, a.y }, { b.x, b.y }, { c.x, randy }, { d.x, randy }, myTurtle);
   }
  }
    
int main(){
ct::TurtleScreen scr; //makes screen
scr.tracer(1); //improves speed the most with parameter 0, greater to see what is happening
ct::Turtle rt(scr);   //makes Turtle on screen

Getrandom newrandom(7);
ct::Point Points[] = {{-400,300 }, {400, 300}, {400, -300},{-400, -300}};
mondrian(Points[0], Points[1], Points[2], Points[3], rt);
scr.exitonclick();  
return 0;
}
