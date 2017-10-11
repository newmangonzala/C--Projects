/****************************************************************************
 * In Class Assignment number: 6
 *
 * Programmer(s): Anthony Newman, Brandon Saunders
 *
 * Submission Date: 09/29/17	
 *
 * EGRE 246 Fall 2017
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: This is program that uses a class called complex that creates
 * objects with real and imaginary values. Overloaded operators (+,-,<<) are used in
 * order to simplify the program. three different functions are used for each
 * overloaded operartors; one that operates with two objects, and the other two
 * add a complex number and a double. A friend overloaded operaror is used when
 * a double type data is on the left hand side of the expression.
 ***************************************************************************/


#include "complex.h"

int main(){
	
	Complex n01(1,8);
	Complex n02(2,7);
	Complex n03(3,6);
	Complex n04(4,5);
	Complex n05;
	Complex n06;
	Complex n07;
	Complex n08;
	Complex n09;
	Complex n10;
	
	cout << "num01 = "<< n01 << endl;
	cout << "num02 = "<< n02 << endl;
	cout << "num03 = "<< n03 << endl;
	cout << "num04 = "<< n04 << endl << endl;

	n05 = n01 + n02;
	n06 = n03 + 3.0;
	n07 = 5.7 + n04;
	n08 = n01 - n02;
	n09 = n03 - 3.0;
	n10 = 5.7 - n04;
	
	cout << "num05 = num01 + num02 : "<< n05 << endl;
	cout << "num06 = num03 + 3.02  : "<< n06 << endl;
	cout << "num07 = 5.7   + num04 : "<< n07 << endl;
	cout << "num08 = num01 - num02 : "<< n08 << endl;
	cout << "num09 = num03 - 3.0   : " << n09 << endl;
	cout << "num10 = 5.7   - num04 : "<< n10 << endl;
	
	return 0;
}

