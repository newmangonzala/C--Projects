#include "player.h"

Player::Player(){
	health = 100;
	name = "";
	maxLow = 8;
	maxMid = 4;
	maxHig = 2;
}

Player::Player(string userName){
	health = 100;
	name = userName;
	maxLow = 8;
	maxMid = 4;
	maxHig = 2;
}

  //Accessor
string Player::getName() const{
	
	return name;
}
  //Accessor
int Player::getHealth() const{
	
	return health;
}
  //Accessor
int Player::getMaxLow() const{
	
	return maxLow;
}
  //Accessor
int Player::getMaxMid() const{
	
	return maxMid;
}
  //Accessor
int Player::getMaxHig() const{
	
	return maxHig;
}
//Mutator
void Player::damageHealth(int Choice, class Player& ptr){
	
	switch(Choice){
			case 0:
				break;  //not really necesary
			case 1:
				health = health - ptr.lowAtt(ptr.getMaxLow());
				break;
			case 2:
				health = health - ptr.midAtt(ptr.getMaxMid());
				break;
			case 3:
				health = health - ptr.higAtt(ptr.getMaxHig());
				break;
	}
	if (health < 0)   //this make any negative integer zero
		health = 0;
	
	return;
}
//Mutator
void Player::changeName(string userName){
	name = userName;
	
	return;
}
//Accessor
int Player::lowAtt(int numAtt){
	if(numAtt > 0){
		maxLow--;
		return (rand() % 21);
	}
	else {
		return 0;
	}
}
//Accessor
int Player::midAtt(int numAtt){
	if(numAtt > 0){
		maxMid--;
		return ((rand() % 21) + 10);
	}
	else {
		return 0;
	}
}
//Accessor
int Player::higAtt(int numAtt){
	if(numAtt > 0){
		maxHig--;
		return ((rand() % 21) + 20);
	}
	else {
		return 0;
	}
}

void Player::reset(){
	
	health = 100;
	maxLow = 8;
	maxMid = 4;
	maxHig = 2;
	
	return;
}