// 17-DoWhile循环.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	/*int i = 0;
	do {
		cout << "Enemy" << i << endl;
		i++;
	} while (i<10);*/

	int scores[] = { 235, 231, 261, 190, 324 };

	/*for (int i = 0; i < 5; i++) {
		cout << scores[i] << endl;
	}*/

	for (int& temp : scores) {
		temp *= 2;
	}

	for (int temp : scores) {
		cout << temp << endl;
	}

	return 0;
}