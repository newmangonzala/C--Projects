#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;


class Complex{
	public:
		Complex(double, double);
		Complex();
		double getReal();
		double getImaginary();
		
		Complex operator+(Complex);
		Complex operator+(double);
		friend Complex operator+(double, Complex);
	
		Complex operator-(Complex);
		Complex operator-(double);
		friend Complex operator-(double, Complex);
		
		friend ostream&  operator<<(ostream&, Complex&);
	
	private:
		double real;
		double imaginary;
};




#endif