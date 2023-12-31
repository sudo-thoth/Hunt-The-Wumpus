// Hunt The Wumpus.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <conio.h>
#include <Windows.h>
using namespace std;
void Move(bool WumpusFound, string move, int xPos, int yPos) {
	
	while (WumpusFound = false) {
		if (move == "w") {
			yPos -= 1;
			
		}
		else if (move == "s") {
			yPos += 1;
		}
		else if (move == "a") {
			xPos -= 1;
		}
		else if (move == "d") {
			xPos += 1;
		}
	}
}
void shoot() {
	
	
	cout << "which direction" << endl;
	//	How to Shoot an Arrow
	cout << "	How to SHOOT an Arrow" << endl;
	cout << "	Press the 1 to shoot an arrow UP one square" << endl;
	cout << "	Press the 2 to shoot an arrow DOWN one square" << endl;
	cout << "	Press the 3 to shoot an arrow LEFT one square" << endl;
	cout << "	Press the 4 to shoot an arrow RIGHT one square" << endl;
	int input; 
	cin >> input; 
	switch (input) {
	case 1:
		cout << endl << "Up" << endl;//key up
		break;
	case 2:
		cout << endl << "Down" << endl;   // key down
		
	case 3:
		cout << endl << "Right" << endl;  // key right
		break;
	case 4:
		cout << endl << "Left" << endl;  // key left
		break;
	}
}
void MoveOrShoot() {
	int select;
	cin >> select;
	int pick;
	if (select == 1) {
		pick = 1;
	}
	else if (select == 2) {
		shoot();
		pick = 2;
	}
	else {
		cout << "Im sorry, you did not select 1 or 2. Please try again" << endl;
	}
}


int main()
{
	random_device rd;
	uniform_int_distribution<int> RandomStartx(0, 4);
	random_device rr;
	uniform_int_distribution<int> RandomStarty(1, 5);
	random_device wu;
	uniform_int_distribution<int> WumpusLocationx(0, 4);
	random_device wp;
	uniform_int_distribution<int> WumpusLocationy(1, 5);
	bool WumpusFound;
	vector < vector<int> > WumpusGrid;
	for (int i = 0; i < 5; i++) {
		vector<int> temp; 
		for (int j = 0; j < 5; j++) {
			temp.push_back(j);

		}
		WumpusGrid.push_back(temp);
	}


	//cout << WumpusGrid[1][2] << endl;
	int init_wx = WumpusLocationx(wu);
	int init_wy = WumpusLocationy(wp);
	WumpusGrid[init_wx][init_wy];

	cout << "	Hunt to kill the Wumpus." << endl;
	cout << "	The Wumpus is hiding in a 5x5 square." << endl;
	cout << "	So imagine a grid labeled 1 thru 5 and then a new row begins. Then 6 thru 10 and so on." << endl;
	cout << "	You will be given hints about what you are the surrounded by, every time you move." << endl;
	cout << "	When you think you've found the Wumpus, shoot an arrow in that direction." << endl;
	cout << "	But make sure not to move into his square because he will eat you." << endl;
	cout << "	**CAUTION There are pits that you can fall into, so use the hints given and try to avoid them.**" << endl;
	cout << " " << endl;
	cout << " " << endl;
	//	How to Move
	cout << "	How to Move" << endl;
	cout << "	Press W to move up one square" << endl;
	cout << "	Press S to move down one square" << endl;
	cout << "	Press A to move to the left one square" << endl;
	cout << "	Press D to move to the Right one square" << endl;
	cout << " " << endl;
	//	How to Shoot an Arrow
	cout << "	How to SHOOT an Arrow" << endl;
	cout << "	Press the 1 to shoot an arrow UP one square" << endl;
	cout << "	Press the 2 to shoot an arrow DOWN one square" << endl;
	cout << "	Press the 3 to shoot an arrow LEFT one square" << endl;
	cout << "	Press the 4 to shoot an arrow RIGHT one square" << endl;
	int init_x = RandomStartx(rd);
	int init_y = RandomStarty(rr);
	cout << "Initial x value " << init_x << endl;
	
	
	cout << "Initial y value " << init_y << endl;
	cout << "Your starting position is" << endl;
	cout << WumpusGrid[init_y][init_x] << endl;
	cout << " " << endl;
	int select;
	cout << "Would you like to Move(1) or Shoot(2)?" << endl;
	int xPos = 2;
	int yPos = 2;
	init_x = xPos;
	init_y = yPos;
MoveOrShoot();
array[1][5] = '*';

for (int i = 0; i < 5; i++) {
	for (int j = 0; j < 5; j++) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE4);
		cout << WumpusGrid[i][j] << " ";
		

	}
	cout << endl; 
}
int pick;
cin >> pick;
if (pick == 1) {
	cout << "Which direction would you like to move?" << endl;
	cout << "	Press 1 to move up one square" << endl;
	cout << "	Press 2 to move down one square" << endl;
	cout << "	Press 3 to move to the left one square" << endl;
	cout << "	Press 4 to move to the Right one square" << endl;
	cout << " " << endl;
	
	int movewhere;
	cin >> movewhere;
	bool checkBound = false;
	while (checkBound == false) {
		switch (movewhere) {
		case 1:
			if (movewhere == 0) {
				cout << "not valid move";
			}
			else {
				cout << init_x << "  " << init_y << endl; 
				cout << endl << "Up" << endl;//key up
				movewhere += 1;

				cout << WumpusGrid[movewhere][init_x] << endl;
				checkBound = true; 
				break;
			}
		case 2:

			cout << endl << "Down" << endl;   // key down
			WumpusGrid[init_x][init_y] += 1;
			cout << WumpusGrid[init_x][init_y] << endl;
			break;
		case 3:

			cout << endl << "Right" << endl;  // key right
			WumpusGrid[init_x][init_y] -= 1;
			cout << WumpusGrid[init_x][init_y] << endl;
			break;
		case 4:

			cout << endl << "Left" << endl;  // key left
			WumpusGrid[init_x][init_y] += 1;
			cout << WumpusGrid[init_x][init_y] << endl;
			break;
		}
	}
}
else if (pick ==2 ){


	cout << "which direction" << endl;
	//	How to Shoot an Arrow
	cout << "	How to SHOOT an Arrow" << endl;
	cout << "	Press the 1 to shoot an arrow UP one square" << endl;
	cout << "	Press the 2 to shoot an arrow DOWN one square" << endl;
	cout << "	Press the 3 to shoot an arrow LEFT one square" << endl;
	cout << "	Press the 4 to shoot an arrow RIGHT one square" << endl;
	int input;
	cin >> input;
	switch (input) {
	case 1:
		cout << endl << "Up" << endl;//key up
		break;
	case 2:
		cout << endl << "Down" << endl;   // key down

	case 3:
		cout << endl << "Right" << endl;  // key right
		break;
	case 4:
		cout << endl << "Left" << endl;  // key left
		break;
	}
}



	shoot();


	
	
	string move;
	cin >> move;
	return 0;
}