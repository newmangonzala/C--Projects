#include "Linked.h"

Linked::Linked(){

	top = NULL;
	size = 0;
}

Linked::~Linked(){
	
	while(size > 0){
		pop();
	}
	display();
}

void Linked::push(int dat){
	node* nNode;
	nNode = new node;
	nNode->data = dat;
	nNode->next = NULL;
	
	if(top == NULL){ // if Linked is empty
	
		top = nNode; // Set this new node to be the top of the Linked
		size++;
	}
	else{ // If the Linked is not empty
		
		node *type; // create an iterator
		type = top;
		while(type->next != NULL){
			type = type->next;
		}
		type->next = nNode;  
		size++; // Increment the size
	}
		
}

void Linked::pop(){
	if(top != NULL){
		node* type;
		type = top;
		if(type->next == NULL){
			top = NULL;
			free(type);
		}
		else{
			top = top->next;
			free(type);
		}
		size--;
	}
}

void Linked::display(){
	node *type; // create an iterator
	type = top; // set that iterator to the top of the Linked
	int i = 1;
	
	if (top == NULL)
		cout << "EMPTY LIST" << endl << endl;
	else{
		while(type != NULL){
			cout << i << ". "<< type->data <<endl;
			type = type->next; 
			i++;
		}
		cout << endl;
	}
}

int Linked::getSize(){
	return size;
}