#include <iostream>
#include <ncurses/ncurses.h>

using namespace std;

int board [4][4];
int arah_baris[] = {1, 0, -1, 0};
int arah_kolom[] = {0, 1, 0, -1};

void new_game () {
	for (int i=0; i<4; i++)
		for (int j=0; j<4; j++)
		board [i][j] = 0;
}

void printUI() {
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++)
		if (board[i][j] == 0)
			cout << " "; 
		else 
		cout << board[i][j]; 
		cout <<endl; 
	}
}

int main (){
	while (true){
		printUI();
		char command;
		cin >> command;
	}
	
	return 0;
}
