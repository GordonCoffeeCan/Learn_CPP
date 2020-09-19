// 12-数组第三种方式模板类Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
using namespace std;

int main(){
	array<int, 9> a1 = {1, 2, 3 ,4, 5};
	array<int, 9> a2 = { 1, 3, 5, 7, 9 };

	a2 = a1;

	cout << a1[4] << " " << a2[4] << endl;
	cout << a1[8] << " " << a2[8] << endl;

	return 0;
}
