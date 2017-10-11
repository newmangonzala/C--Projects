#include "Linked.h"



int main(){
	
	Linked L;
	
	L.push(1);
	L.push(99);
	L.push(88);
	L.push(5);
	L.push(77);
	L.display();
	L.pop();
	
	L.display();
	L.pop();
	
	L.display();
	
	//L.pop();
	
	//cout << L.size << endl;
	
	return 0;
}