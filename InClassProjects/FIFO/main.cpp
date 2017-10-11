/****************************************************************************
 * In Class Assignment number: 5
 *
 * Programmer(s): Anthony Newman, Anwar
 *
 * Submission Date: 09/22/2017
 *
 * EGRE 246 Fall 2017
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: FIFO Linked List. This is a linked list using pointers. This is
 * a FIFO type of list. Meaning the first node pushed into the list is also the
 * first to be popped or removed. Pop and push are the main class methods where
 * data is added or remove from the list nodes.
 ***************************************************************************/

#include "Linked.h"

int main(){
	
	Linked L; // Declare a new link list
	L.display();
	
	for(int i = 0; i <  11; i++){
		L.push(i);
	}
	
	
	L.display();
	L.pop();
	L.pop();
	L.pop();
	L.display();
	
	return 0;
}