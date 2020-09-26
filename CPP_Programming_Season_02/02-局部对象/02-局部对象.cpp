// 02-局部对象.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int min(int num1, int num2, int num3);

int main()
{
    int res = min(4, 8, 2);

    //cout << res;

    res = min(3, 3, 6);
    res = min(2, 3, 5);

    return 0;
}

int min(int num1, int num2, int num3) {

    int res;

    static int count = 0;

    count++;
    cout << "Count = " << count << endl;

    res = num1 < num2 ? num1 : num2;
    res = res < num3 ? res : num3;

    return res;
}