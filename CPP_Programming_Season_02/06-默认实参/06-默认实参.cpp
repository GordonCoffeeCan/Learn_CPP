// 06-默认实参.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void compare(int num1, int num2 = 100);
void greet(string name = "user");

int main()
{
    int a = 59;
    int b = 120;

    compare(a);
    compare(b);
    compare(a, b);

    greet();
    greet("Jane");

    return 0;
}

void compare(int num1, int num2) {
    if (num1 > num2) {
        cout << num1 << " > " << num2 << endl;
    }
    else if (num1 < num2) {
        cout << num1 << " < " << num2 << endl;
    }
    else {
        cout << num1 << " = " << num2 << endl;
    }
}

void greet(string name) {
    cout << "Hello, " << name << endl;
}