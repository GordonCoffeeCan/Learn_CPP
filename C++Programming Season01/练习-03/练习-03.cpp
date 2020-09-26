// 练习-03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//1.
	cout << "第1题" << endl;
	int i;
	for (int i = 0; i < 5; i++) {
		cout << i;
		cout << endl;
	}
	//output 0 1 2 3 4

	//2.
	cout << "第2题" << endl;
	int j;
	for (int j = 0; j < 11; j+=3) {
		cout << j;
		cout << endl << j << endl;
	}

	//5
	cout << "第5题" << endl;

	for (int k = 0; k < 7; k++) {
		cout << pow(2, k) << endl;
	}

	//6
	cout << "第6题" << endl;
	int inputNum1 = 0;
	int inputNum2 = 0;

	cout << "Input a number" << endl;
	cin >> inputNum1;

	cout << "Input another number" << endl;
	cin >> inputNum2;

	int allNum = 0;

	for (int i = 0;  i < inputNum2 - inputNum1 + 1; i++) {
		allNum += inputNum1 + i;
	}
	cout << allNum << endl;

	//7
	cout << "第7题" << endl;
	int userInput;
	int allNum2 = 0;
	do {
		cout << "Input a number" << endl;
		cin >> userInput;
		allNum2 += userInput;
		cout << "Input number all together is " <<allNum2 << endl;
	} while (userInput != 0);
	cout << "Program Finished" << endl;
}