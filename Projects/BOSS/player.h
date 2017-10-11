#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

using namespace std;

class Player{
	public:
		Player();
		Player(string);
		string getName() const;  //Accessor
		int getHealth() const;  //Accessor
		int getMaxLow() const;  //Accessor
		int getMaxMid() const;  //Accessor
		int getMaxHig() const;  //Accessor
		void damageHealth(int, class Player&); //Mutator
		void changeName(string);  //Mutator
		int lowAtt(int); //Mutator
		int midAtt(int); //Mutator
		int higAtt(int); //Mutator

		void reset(); //Mutator
		
	private:
		int health;    
		string name; 
		int maxLow;
		int maxMid;
		int maxHig;
	
};

#endif