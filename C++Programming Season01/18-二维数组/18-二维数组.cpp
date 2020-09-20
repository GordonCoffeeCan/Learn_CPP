// 18-二维数组.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int scores[] = { 10, 1, 20, 50, 60 };
		
	int scores2[4][5] = {
		{1, 2, 3, 4, 5}, 
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5}
	};

	cout << scores2[1][1] << endl;

	/*for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "i: " << i << " " << "j: " << j << endl;
		}
	}*/

	for( int i = 0;  i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cout << scores2[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}