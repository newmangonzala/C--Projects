/****************************************************************************
* Project number: 2
*
* Programmer: Anthony
*
* Submission Date: 09/26/2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Boss Battle game. The game consists of two players (User vs. Computer)
* where each player has a maximum number of attacks. There are three types of
* attacks. High attack, middle attack, and low attack with a maximum number of
* 8, 4 ,2 respectively. A class was created for each player where they have
* their name, health, and number of attacks left as private members. Accessors are
* available for each private members. Finaly, there are 6 mutator functions;
* one for updating the health, one for changing the player's name,
* one to reset member's values if the user wants to play again, and the last three
* to update the maximum number of attacks left.
***************************************************************************/
 
#include "player.h"

void Display(class Player&, class Player&);

int main(){
	
	srand(42);
	char userChoice;
	int integerChoice;
	int bossChoice;
	char playAgain;
	bool play = true;
	
	Player one("Goku");
	Player two("Majin Buu");
	
	while(play){
		while(one.getHealth() > 0 && two.getHealth() > 0){
			Display(one, two);
			cout << "Which attack do you choose? <1,2,3> - ";
			cin >> userChoice;
			integerChoice = tolower(userChoice) - 48;

			while(integerChoice < 0 || integerChoice > 3){
				cin.clear();
				cout << endl <<"Wrong input. please enter a valid attack" << endl;
				cout << "Which attack do you choose? <1,2,3> - ";
				cin >> userChoice;
				integerChoice = tolower(userChoice) - 48;
			}
			
			two.damageHealth(integerChoice, one);
			
			if(one.getHealth() <= 0 || two.getHealth() <= 0)
				break;
			
			bossChoice = (rand() % 3) + 1;
			one.damageHealth(bossChoice, two);
			
			if(one.getHealth() <= 0 || two.getHealth() <= 0)
				break;
		}
		
		Display(one, two);
		
		if(one.getHealth() > two.getHealth())
			cout << "Winner : " << one.getName() << endl << endl;
		else
			cout << "Winner : " << two.getName() << endl << endl;
		
		cout << "Play Again? <Y/N> -";
		cin >> playAgain;
		if (tolower(playAgain) == 'y'){
			one.reset();
			two.reset();
			play = true;
		}
		else
			play = false;
	}
	return 0;
}

void Display(class Player& one, class Player& two){
	
	cout << endl <<"Player 1 - HP: " << one.getHealth();
	cout.width(32);
	cout << "Player 2 - HP: " << two.getHealth() << endl;
	cout << " " << one.getName() ;
	cout.width(40);
	cout << two.getName() << endl << endl;  //  need space
	cout << " 1. Attack Low  - " << one.getMaxLow() << " Left";
	cout.width(29);
	cout << " 1. Attack Low  - " << two.getMaxLow() << " Left" << endl;
	cout << " 2. Attack Mid  - " << one.getMaxMid() << " Left";
	cout.width(29);
	cout << " 2. Attack Mid  - " << two.getMaxMid() << " Left" << endl;
	cout << " 3. Attack High - " << one.getMaxHig() << " Left";
	cout.width(29);
	cout << " 3. Attack High - " << two.getMaxHig() << " Left" << endl << endl;
	
}