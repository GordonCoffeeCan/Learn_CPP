// 05-数组.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int scoreArray1[4] = { 34, 3, 234, 45 };
	int scoreArray2[4] = { 34, 3 };
	int scoreArray3[10] = { 34, 3, 5, 234, 565, 10 };
	int scoreArray4[] = { 34, 3, 5, 234, 565, 10 };


	int scoreArray5[4]{ 23,25,21,10 };
	scoreArray5[2] = 39;
	cout << scoreArray5[2] << endl;


	return 0;
}