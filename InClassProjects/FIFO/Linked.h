#ifndef LINKED_H
#define LINKED_H

#include <iostream>
#include <cstdlib>

using namespace std;

class Linked{
	public:
		Linked();       //contructor
		~Linked();		//destructor
		void push(int); //mutator
		void pop(); 	//mutator
		void display(); //accessor
		int getSize();  //accessor
		
	private:
		struct node{
			int data;
			node* next;
		};
		int size;    
		node* top;	
};

#endif