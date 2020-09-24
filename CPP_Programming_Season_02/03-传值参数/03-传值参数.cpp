// 03-传值参数.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int reset(int i);
void resetP(int* pi);

int main()
{

    int num = 10;

    cout << "Reset: " << reset(num) << endl;
    resetP(&num);
    cout << "ResetP: " << num << endl;

    return 0;
}

int reset(int i) {
    i *= 2;

    return i;
}

void resetP(int* pi) {
    *pi *= 2;
}