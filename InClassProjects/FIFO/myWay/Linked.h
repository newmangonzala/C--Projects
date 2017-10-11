#ifndef LINKED_H
#define LINKED_H

#include <iostream>
#include <cstdlib>

using namespace std;

class Linked{
	public:
		Linked();
		~Linked();
		void push(int inputData);
		void pop(); 
		void display();
		int getSize();
		
	private:
		struct node{
			int data;
			node* next;
		};
		int size;      ///keep this
		node* top;	
		node* bottom;
};

#endif