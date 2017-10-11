#include <iostream>

using namespace std;

class grocery {
	private:
	
	struct item{
		string name;
		double price;
		
		item *next;
	};
	string nameList;
	
	item *top;
	double ttPrice;
	int size;
	
	public:
		grocery(string);
		~grocery();
		//Accessors:
		int getSize();
		string getNameList();
		string getNameItemTop();
		double getPriceItemTop();
		double getTotalPrice();
		void display(ostream&);
		//Mutators:
		void pushItem(string, double);
		void popItem();
		//Overloaded operator:
		void operator()(string, double);
		friend ostream&  operator<<(ostream&, grocery&);
};


