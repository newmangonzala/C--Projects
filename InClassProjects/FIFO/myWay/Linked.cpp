#include "Linked.h"

Linked::Linked(){

	top = NULL;
	bottom = NULL;
	size = 0;
}

Linked::~Linked(){
	
	//cout << "destructor" << endl;
	while(top!=NULL){ // If the Linked is not empty.
	
		node *ptr; // Create an iterator
		ptr = top; // Set the iterator to the top of the Linked
		
		if(ptr->next == NULL) // If this is the only item in the Linked
		{
			top = NULL; // Set top to a NULL address
			free(ptr);  // Dealocate information pointed to by the iterator
		
		}
		else{  // If there are more items than one in the Linked
		
			top = top->next;  // Set top to the second item in the Linked
			free(ptr);  // Dealocate information pointed to by the iterator
		}
		size--; //Decrement the items in the Linked.
	}
	//cout << "final" << endl;
}


void Linked::push(int inputData){
	node* nNode;
	nNode = new node;
	nNode->data = inputData;
	nNode->next = NULL;
	
	if(top == NULL){ // if Linked is empty
	
		top = nNode; // Set this new node to be the top of the Linked
		bottom = nNode; 
	}
	else{ // If the Linked is not empty
	
		nNode->next = top; // Set the next pointer to where top currently is
		top = nNode;  // Reset top to be this new node
	}
	
	size++; // Increment the size
}


void Linked::pop(){
	
	if(top!=NULL){
		node* tempNode;
		tempNode = top;
		while(tempNode->next != bottom){
			
			tempNode = tempNode->next;
		}
		tempNode->next = NULL;
		
		free(bottom);
		bottom = tempNode;
		size--;
		//cout << "pop" << endl;
	}
}


void Linked::display(){
	node *ptr; // create an iterator
	ptr = top; // set that iterator to the top of the Linked
	int i = 1; // Set out label to 1 to start
	while(ptr!=NULL) //As long as the iterator does not point to NULL
	{
		cout << i << ". "<< ptr->data <<endl; // Display information
		ptr = ptr->next; // Increment the iterator to the next position
		i++;	// Increment the label
	}
}

int Linked::getSize(){
	return size;
}