// 11-指针与数组.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{

	int a[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	cout << a << endl;

	cout << *a << endl;

	cout << *(a + 4) << endl;

	*(a + 1) = 1000;

	cout << a[1] << endl;

	return 0; 
}
