/****************************************************************************
 * Lab number: 1
 *
 * Programmer (s) : Brandon Sorensen, Anthony Newman
 *
 * Submission Date: 9/4/2017
 *
 * EGRE 246 Fall 2017
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: Rock Paper Scissors Game. The two players choose one 
 * of three choices. In this case, the user plays against the computer. the
 * computer's choice is randomly generated, and then compared to the user's
 * choice. This game uses a switch statement as well as a series of if 
 * statements to determine who is the winnner.
 ***************************************************************************/
 
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int choice;
	srand(42);
	int computer;
	string PR = "Paper Beats Rock";
	string RS = "Rock Beats Scissors";
	string SP = "Scissors Beats Paper";
	char quit;
	bool play = true;
	
	cout << "Rock Paper Scissors?" << endl << endl;
	
	while(play){
		while (1) 
		{
			computer = (rand() % 3) + 1;
			cout << endl << "Rock Paper or Scissors? -" << endl;
			
			cout << "1 - Rock" << endl << "2 - Paper" << endl << "3 - Scissors" << endl;
			
			cout << "choice - ";
			cin >> choice;
			
			
			while ((choice > 3) || (choice < 0))
			{
				cout << "Invalid choice. Please choose one from 1 to 3." << endl;
				cin >> choice;
				if ((choice < 3) && (choice > 0))
					break;
			}

			
			if (computer == choice)
			{
				cout << "Tie Game" << endl;
			}
			else 
			{
				switch (choice)
				{
					case 1:
						if (computer == 2)
						{
							cout << "Loss - " << PR << endl;
						}
						else 
						{
							cout << "Win - " << RS << endl;
						}
						break;
					case 2:
						if (computer == 3)
						{
							cout << "Loss - " << SP << endl;
						}
						else 
						{
							cout << "Win - " << PR << endl;
						}
						break;
					case 3:
						if (computer == 1)
						{
							cout << "Loss - " << RS << endl;
						}
						else 
						{
							cout << "Win - " << SP << endl;
						}
						break;
				}
			}

		}
		cout << "Would you like to play again? -Y/N" << endl;

		cin >> quit;
		if (tolower(quit) == 'y'){
			one.reset();
			two.reset();
			play = true;
		}
		else
			play = false;
	}
}