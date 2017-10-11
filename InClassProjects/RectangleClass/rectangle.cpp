#include "rectangle.h"

Rectangle::Rectangle(){
	
	length = 0;
	width = 0;
	return;
}

Rectangle::Rectangle( double userLen, double userWid){
	
	length = userLen;
	width = userWid;
	return;
}

void Rectangle::setLen(double userLen){
	length = userLen;
	
	return;
}
void Rectangle::setWid(double userWid){
	width = userWid;
	
	return;
	
}

double Rectangle::getLen() const{
	
	return length;
}

double Rectangle::getWid() const{
	
	return width;
}

double Rectangle::area(){
	
	return length * width;
}

double Rectangle::perimeter(){
	
	return (length * 2) + (width * 2);
}