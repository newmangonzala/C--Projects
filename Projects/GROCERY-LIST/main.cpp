/****************************************************************************
* Project number: 3
*
* Programmer: Anthony Newman
*
* Submission Date: 10/06/2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Priority Queue. This program creates two linked lists where items
* can be added to the list(pushItem method) and remove(popItem method). the popItem
* method removes items only at the top of the list. While the push method adds 
* items according the item price. When items are removed from one list(shopping list), they added
* to the second list(cart list). Note that the operator() and << were overloaded. The operator ()
* adds the item's name and price to the list and the operator << prints the list name as well as
* every item with their corresponding name and price. The number of items that were passed to 
* the cart list was determined by a budget. Thus, everytime an item was passed, the budget decremented
* until the next item in the list would cause the budget to be less than $0
***************************************************************************/

#include "grocery.h"

int main(){

	double budget = 50.0;
	
	grocery L1("Shopping");
	grocery L2("Cart");
	
	L1("Gallon of Milk", 6.99);
	L1("Dozen Eggs", 5.69);
	L1("Peanut Butter", 4.99);
	L1("Chicken Strips",6.79);
	L1("Ice Scream", 4.00);
	L1("Cereal",3.98);
	L1("3lbs of Apples", 4.11);
	L1("Gift Card", 10);
	L1("10 pack of socks", 19.78);
	L1("48 count AA Batteries", 14.49);

	cout << L1;
	cout << endl << "...Shopping..." << endl;
	
	while((budget - L1.getPriceItemTop()) >= 0){
		budget -= L1.getPriceItemTop();
		L2(L1.getNameItemTop(),L1.getPriceItemTop());
		L1.popItem();
	}
	
	cout << L1;
	cout << L2;

	return 0;
}