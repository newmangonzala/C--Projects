/****************************************************************************
 * Lab number: 2
 *
 * Programmer (s) : Anthony Newman, Isaac Wagonner (Partner)
 *
 * Submission Date: 9/15/2017
 *
 * EGRE 246 Fall 2017
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: Rectangle Class. A program with a basic class for a rectangle.
 * Rectangle1 (object 1) was defined, and initialized using a default Constructor.
 * While, Rectangle2 (object 2) was defined and initialized with the overloaded 
 * constructor. The class itself contains several methods. Two mutators ,setLen and
 * setWid, which were used for initializing Rectangle1. four Accessor methods that
 * access the private members or return an expresion.
 ***************************************************************************/
 
#include "rectangle.h"

int main(){
	
	Rectangle Rectangle1;
	Rectangle1.setLen(10);
	Rectangle1.setWid(8);
	
	Rectangle Rectangle2(3,4);
	
	cout << "Rectangle 1" << endl;
	cout << "Length = " << Rectangle1.getLen() << " Width = "<< Rectangle1.getWid() << endl;
	cout << "area = " << Rectangle1.area() << endl;
	cout << "perimeter = " << Rectangle1.perimeter() << endl << endl;
	
	cout << "Rectangle 2" << endl;
	cout << "Length = " << Rectangle2.getLen() << " Width = "<< Rectangle2.getWid() << endl;
	cout << "area = " << Rectangle2.area() << endl;
	cout << "perimeter = " << Rectangle2.perimeter() << endl << endl;
	
	cout << "Add Perimeters = " << Rectangle1.perimeter() + Rectangle2.perimeter() << endl;
	cout << "Substract Areas = " << Rectangle1.area() - Rectangle2.area() << endl;
	
	return 0;
}