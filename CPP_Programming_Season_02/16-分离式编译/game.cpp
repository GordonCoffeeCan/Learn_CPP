#include "game.h"

void inputGame(Game game[], int size){
	for (int i = 0; i < size; i++) {
		cout << "Input game names." << endl;
		cin >> game[i].gameName;
		cout << "Input game score (float number less than 10)." << endl;
		cin >> game[i].gameScore;
	
	}
}
void sort(Game game[], int size) {
	Game temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i+1; j < size; j++) {
			if (game[i].gameScore < game[j].gameScore) {
				temp = game[i];
				game[i] = game[j];
				game[j] = temp;
			}
		}
	}
}
void display(Game game[], int size) {
	for (int i = 0; i < size; i++) {
		cout << i + 1 << ": " << game[i].gameName << "(" << game[i].gameScore << ") " << endl;
	}
}