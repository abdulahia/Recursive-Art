#include "CTurtle.hpp"   //This brings in the CTurtle library for use
#include <iostream> //for input & output
#include <random> //needed for Getrandom
#include <chrono> //needed for Getrandom's seed
namespace ct = cturtle;  //This makes it possible to use the CTurtle commands using ct::
using namespace std;

class MondrianArt{

	 public:
    MondrianArt(){
    // Constructor should initialize instance variables.
    // This may include a list of colors you can use, e.g {“white”, “blue”, “red”, “yellow”}
    
    }
    void  setup_turtle(ct:: Turtle& myTurtle){
       // Moves the turtle to the top left hand side of the screen (goTo -400, 300
      myTurtle.penup();
      myTurtle.goTo(-400, 300);
    }

    void draw_rectangle(ct::Point a, ct::Point b, ct::Point c, ct::Point d, ct::Color color, ct::Turtle& myTurtle){
    myTurtle.fillcolor(color);
    myTurtle.penup();
    myTurtle.goTo(a.x, a.y);
    myTurtle.pendown();
    myTurtle.begin_fill();
    myTurtle.goTo(c.x, c.y);
    myTurtle.goTo(b.x, b.y);
    myTurtle.goTo(d.x, d.y);
    myTurtle.goTo(a.x, a.y);
    myTurtle.end_fill();
    }
    
    void mondrian(ct::Point a, ct::Point b, ct::Point c, ct::Point d, int region, int width, int height, ct::Turtle myTurtle){
      const string colormap[] = {"blue", "red",    "green", "white", "yellow", "violet", "orange"};
    draw_rectangle(a,b,c,d, {colormap[region]}, myTurtle);
    // The recursive mondrian function that holds all the steps found above.
    width = 800;
    height = 600; 
    region = width * height; 
    if (region > 600/2 && region > 400/2){
      mondrian(a, ct::middle(a, b), ct::middle(a, c), ct::middle(a,d), region - 1, myTurtle);
      // mondrian(b, ct::middle(a, b), ct::middle(b, c), ct::middle(b,d), region - 1, myTurtle);
      // mondrian(c, ct::middle(c, b), ct::middle(a, c), ct::middle(c,d), region - 1, myTurtle);
      // mondrian(d, ct::middle(d,a), ct::middle(d,b), ct::middle(d,c), region - 1, myTurtle);
    }
    else if (region > 600/2){

    }
    else if (region > 400/2){
    
    }
   
    }
    void reset(){
    // Optional. You can use this to keep creating pieces of art until you find one you like!
    // e.g, turtle.reset()
    }
   private:
    // string colorList[];
    // ct:: TurtleScreen screen;
    // ct:: Turtle myTurtle;
};
int main(){
ct::TurtleScreen scr;
ct::Turtle myTurtle(scr);
// myTurtle.penup();
myTurtle.goTo(-400, 300);
// myTurtle.pendown();
myTurtle.goTo(400, -300);
scr.exitonclick();  
return 0;
}
