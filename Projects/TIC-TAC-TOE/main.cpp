/****************************************************************************
 * Project number: 1
 *
 * Programmer: Anthony Newman
 *
 * Submission Date: 9/12/2017
 *
 * EGRE 246 Fall 2017
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: Tic-Tac-Toe game. The corresponding 3x3s sized grid was created 
 * with a 2 dimensional char array. The user was asked to enter a valid position
 * within the grid. If the user enters an invalid position, the program will ask
 * again until a valid position is chosen. This was checked on a separate
 * function with a series of if else statements. The computer input was 
 * generated with a rand function. If the computer choice was already ocupated
 * then it will be generated again until it is a valid choice. To determine the
 * the winner the series of nested for loops was used. Simmilarly, a nested loop
 * was used to check if the game ends up tie.
 ***************************************************************************/
 
#include <iostream>
#include <cstdlib>

using namespace std;

void Display(char [3][3]);
bool CheckGrid(char [3][3]);
bool CheckWinner(char [3][3]);
void UserInput(char [3][3]);
void ComputerInput(char [3][3]);


int main(){
	
	char grid[3][3] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
	srand(42);
	
	cout << "Tic-Tac-Toe Game." << endl << endl;
	while(1){
		cout << endl <<"Please choose a Row and a Column (X)" << endl;
		Display(grid);
		UserInput(grid);
		Display(grid);
		if (CheckWinner(grid)){
			break;
		}
		else if (CheckGrid(grid)){
			break;
		}
		ComputerInput(grid);
		if (CheckWinner(grid)){
			break;
		}
		else if (CheckGrid(grid)){
			break;
		}
	}
	
	return 0;
}

void Display(char grid[3][3]){
	//Display the grid
	
	cout << "   A   B   C   " << endl;
	cout << "     |   |     " << endl;
	cout << "1  " << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2] << endl;
	cout << "     |   |     " << endl;
	cout << "  -----------  " << endl;
	cout << "     |   |     " << endl;
	cout << "2  " << grid[1][0] << " | " << grid[1][1] << " | " << grid[1][2] << endl;
	cout << "     |   |     " << endl;
	cout << "  -----------  " << endl;
	cout << "     |   |     " << endl;
	cout << "3  " << grid[2][0] << " | " << grid[2][1] << " | " << grid[2][2] << endl;
	cout << "     |   |     " << endl;
}

void UserInput(char grid[3][3]){
	//ask the user for a column and row
	
	char col;
	char rowChar;
	int column;
	int row;
	int debug;
	
	while(1){
		cout << "  Column - ";
		cin >> col;
		
		column = (int)tolower(col) - 97;
		
		while (column < 0 || column > 2){
			if (column > 2){
				cout << endl << "Input out of scope. Please enter a valid column" << endl << endl;
			}
			else if (column < 0){
				cout << endl << "Wrond input. Please enter a valid column" << endl << endl;
			}
			cout << "  Column - ";
			cin >> col;
			column = (int)tolower(col) - 97;
		}
		cout << "  Row - ";
		cin >> rowChar;
		row = (int)rowChar - 49;
		
		while (row < 0 || row > 2){
			if (((row > 2) && (row < 10)) || (row == -1)){
				cout << endl << "Input out of scope. Please enter a valid row" << endl << endl;
			}
			else if ((row < -1) || (row > 9)){
				cout << endl << "Wrond input. Please enter a valid row" << endl << endl;
			}
			cout << "  Row - ";
			cin >> rowChar;
			row = (int)rowChar - 49;
		}
		cout << endl;
		if (grid[row][column] == ' '){
			grid[row][column] = 'X';
			break;
		}
		else {
			cout << "Position already taken" << endl << endl;
			continue;
		}
	}
	
	
	return;
}

bool CheckWinner(char grid[3][3]){
	// Check for a winner on all the rows, columns, and diagonals
	
	int i,j, countX, countO;
	
	// Check Rows ------------------
	for(i=0; i < 3; i++){
		countX = 0;
		countO = 0;
		for(j=0; j < 3; j++){
			if (grid[i][j] == 'X'){
				countX++;
			}
			if (grid[i][j] == 'O'){
				countO++;
				
			}
		}
		if (countX == 3){
			cout << "Win. (X) Beats (O)" << endl;
			return true;
		}
		if (countO == 3){
			cout << "Loss. (O) Beats (X)" << endl;
			return true;
		}
	}
	
	// Check Column ----------------
	for(i=0; i < 3; i++){
		countX = 0;
		countO = 0;
		for(j=0; j < 3; j++){
			if (grid[j][i] == 'X'){
				countX++;
			}
			if (grid[j][i] == 'O'){
				countO++;
			}
		}
		if (countX == 3){
			cout << "Win. (X) Beats (O)" << endl;
			return true;
		}
		if (countO == 3){
			cout << "Loss. (O) Beats (X)" << endl;
			return true;
		}
	}
	// Check Diagonal from left to right
	countX = 0;
	countO = 0;
	for(i=0; i < 3; i++){
		if (grid[i][i] == 'X'){
			countX++;
		}
		if (grid[i][j] == 'O'){
				countO++;
		}
		if (countX == 3){
			cout << "Win. (X) Beats (O)" << endl;
			return true;
		}
		if (countO == 3){
			cout << "Loss. (O) Beats (X)" << endl;
			return true;
		}
	}
	
	// Check Diagonal from right to left
	countX = 0;
	countO = 0;
	for(i=0, j=2; i < 3; i++, j--){
		if (grid[i][j] == 'X'){
			countX++;
		}
		if (grid[i][j] == 'O'){
				countO++;
		}
		if (countX == 3){
			cout << "Win. (X) Beats (O)" << endl;
			return true;
		}
		if (countO == 3){
			cout << "Loss. (O) Beats (X)" << endl;
			return true;
		}
	}
	return false;
}

bool CheckGrid(char grid[3][3]){
	// Check if there are playable spaces 
	int i, j, count = 0;
	
	for(i=0; i < 3; i++){
		for(j=0; j < 3; j++){
			if (grid[i][j] == ' '){
				count++;
			}
		}
	}
	if (count == 0){
			cout << "Tie game" << endl;
			return true;
	}
		
	return false;
}

void ComputerInput(char grid[3][3]){
	int column, row;
	while(1){
		column = rand() % 3;
		row = rand() % 3;
		
		if (grid[row][column] == ' '){
			grid[row][column] = 'O';
			break;
		}
	}
	
	return;
}