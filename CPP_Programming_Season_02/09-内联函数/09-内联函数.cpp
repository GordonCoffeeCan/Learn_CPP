// 09-内联函数.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

inline int sum(int a, int b) {return a + b;}

int main()
{
    cout << sum(25, 45) << endl;
    return 0;
}