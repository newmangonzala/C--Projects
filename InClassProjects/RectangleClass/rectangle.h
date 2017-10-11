#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle{
	
	public:
		Rectangle(); 								//Default Constructor
		Rectangle(double userLen, double userWid);	//Overloaded constructor
		void setLen(double userLen);				//Mutator
		void setWid(double userWid);				//Mutator
		double getWid() const; 						//Accessor
		double getLen() const; 						//Accessor 
		double area();								//Accessor 
		double perimeter();							//Accessor 
 	
	private:
		double length;
		double width;
};

#endif