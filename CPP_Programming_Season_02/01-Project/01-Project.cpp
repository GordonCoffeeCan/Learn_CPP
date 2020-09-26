// 01-Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int myFunction(int _i);

int main()
{
    int i = 0;

    cout << "Input a value" << endl;
    cin >> i;

    cout << myFunction(i) << endl;

    return 0;
}

void greet() {
    cout << "Hi guys!" << endl;
}

int myFunction(int _i) {
    int res = _i * 10;

    return res;
}