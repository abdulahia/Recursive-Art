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
    
    void mondrian(ct::Point a, ct::Point b, ct::Point c, ct::Point d, int region, int width, int lenght, int degree, ct::Turtle myTurtle){
    draw_rectangle(a,b,c,d, color, myTurtle);
    // The recursive mondrian function that holds all the steps found above.
    
    if (region > width/2 && region > lenght/2){
    
    }
    else if (region > width/2){

    }
    else if (region > lenght/2){
    
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
// ct::TurtleScreen scr;
// ct::Turtle myTurtle(scr);
// myTurtle.penup();
// myTurtle.goTo(-400, 300);
// scr.exitonclick();  //exists graphics screen
return 0;
}
