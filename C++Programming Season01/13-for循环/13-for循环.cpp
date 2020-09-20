// 13	-for循环.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>;
using namespace std;

int main()
{
	string str;

	cin >> str;

	/*for (int i = 0; i < 10; i++) {
		cout << "Enemy" << i << endl;
	}*/

	for (int i = str.size() - 1; i >= 0; i--) {
		cout << str[i];
	}
}
