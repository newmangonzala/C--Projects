#include "grocery.h"

grocery::grocery(string name){
	top = NULL;
	size = 0;
	ttPrice = 0;
	nameList = name;
}

grocery::~grocery(){
	
	while(top!=NULL){ 
		popItem(); 
	}
}

int grocery::getSize(){
	return size;
}


string grocery::getNameList(){
	
	return nameList;
}

string grocery::getNameItemTop(){
	
	return top->name;
}

double grocery::getPriceItemTop(){
	
	return top->price;	
}
double grocery::getTotalPrice(){
	return ttPrice;
}

void grocery::pushItem(string name, double price){
	item *nItem;
	nItem = new item;
	nItem->name = name;
	nItem->price= price;
	nItem->next = NULL;
	ttPrice = ttPrice + price;
	
	if(top == NULL){
		top = nItem;
	}
	else{
		item *nTemp;
		nTemp = top;
		
		if(nItem->price < top->price){
			nItem->next = top;
			top = nItem;
		}
		else{
			while((nTemp->next != NULL) && (nItem->price > nTemp->next->price)){
				nTemp = nTemp->next;
			}
			nItem->next = nTemp->next;
			nTemp->next = nItem;
		}
	}
	
	size++;
	
	return;
}

void grocery::popItem(){
	
	
	if(top!=NULL){
		
		item *ptr; 
		ptr = top; 
		ttPrice = ttPrice - ptr->price;
		
		if(ptr->next == NULL){
			free(ptr);
			top = NULL; 
  
		}
		else{
			top = top->next;  
			free(ptr); 
		}
		size--;
	}
}

void grocery::operator()(string name, double price){
	pushItem(name, price);
}

ostream& operator<<(ostream& os, grocery& print){
	
	print.display(os);

	return os;
}

void grocery::display(ostream& os){
	os << endl <<"List: "<< getNameList() << endl;
	int i = 1;
	item *ptr;
	ptr = top;
	while(ptr != NULL){
		os << i << ". " << ptr->name << " - $" << ptr->price << endl;
		ptr = ptr->next;
		i++;
	}
	os << "Total = $" << getTotalPrice()<< endl;  //getTotalPrice not necesary 
	
}




