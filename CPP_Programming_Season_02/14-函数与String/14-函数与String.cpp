// 14-函数与String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void fillGames(string names[], int n);
void printGames(string names[], int n);

int main()
{
	const int size = 5;
	string gameNames[size]{};
	cout << "Input " << size << " game names you like." <<endl;
	fillGames(gameNames, size);
	printGames(gameNames, size);

    return 0;
}

void fillGames(string names[], int n) {
	for (int i = 0; i < n; i++) {
		getline(cin, names[i]);
	}
}

void printGames(string names[], int n) {
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ": " << names[i] << endl;
	}
}