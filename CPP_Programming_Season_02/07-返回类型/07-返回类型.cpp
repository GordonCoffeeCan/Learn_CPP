// 07-返回类型.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void swap(int& a, int& b);
int max(int a, int b);
int& sum(int a, int b, int& res);

int main()
{
    int num1 = 2;
    int num2 = 231;
    swap(num1, num2);

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    int res = max(num1, num2);

    cout << "the max value is " << res << endl;

    res = sum(num1, num2, res);

    cout << "total are " << res << endl;

    sum(num1, num2, res)++;

    cout << res << endl;

    return 0;
}

void swap(int& a, int& b) {
    if (a >= b) {
        return;
    }
    else {
        int temp = a;
        a = b;
        b = temp;
        return;
    }
}

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int& sum(int a, int b, int& res) {

    res = a + b;

    return res;
}