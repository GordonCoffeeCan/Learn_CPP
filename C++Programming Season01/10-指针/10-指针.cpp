// 10-指针.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 9.7;


    //& Get variable addsress;

    cout << &a << endl;
    cout << &b << endl;

    //* Get valriable from an address;

    cout << *(&a) << endl;


    return 0;
}
