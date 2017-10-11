#include "complex.h"


Complex::Complex(){
	real = 0;
	imaginary = 0;
}

Complex::Complex(double real, double imaginary){
	this->real = real;
	this->imaginary = imaginary;
}

Complex Complex::operator+(Complex rhs){
	Complex temp;
	
	temp.real = real + rhs.real;
	temp.imaginary = imaginary + rhs.imaginary;
	
	return temp;
}

Complex Complex::operator+(double A){
	Complex temp;
	
	temp.real = real + A;
	temp.imaginary = imaginary;
	
	return temp;
}

Complex operator+(double A, Complex rhs){
	Complex temp;
	
	temp.real = A + rhs.real;
	temp.imaginary = rhs.imaginary;
	
	return temp;
}

Complex Complex::operator-(Complex rhs){
	Complex temp;
	
	temp.real = real - rhs.real;
	temp.imaginary = imaginary - rhs.imaginary;
	
	return temp;
}

Complex Complex::operator-(double A){
	Complex temp;
	
	temp.real = real - A;
	temp.imaginary = imaginary;
	
	return temp;
}

Complex operator-(double A, Complex rhs){
	Complex temp;
	
	temp.real = A - rhs.real;
	temp.imaginary = rhs.imaginary;
	
	return temp;
}

ostream& operator<<(ostream& os, Complex& print){  //print
	
	os << print.real << " + j(" << print.imaginary << ")";
}

double Complex::getReal(){
	return real;
}

double Complex::getImaginary(){
	return imaginary;
}
