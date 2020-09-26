// 05-Const参数.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int cube1(int i);
int cube2(const int i);
int pCube1(int* pi);

int main() {

    int num1 = 10;
    const int num2 = 10;

    num1 = 20;
    //num2 = 20;

    int* p1 = &num1;
    //int *p2 = &num2;

    const int* p3 = &num1;
    const int* p4 = &num2;

    //int *const int p5 = &num1;
    //int *const int p6 = &num2;

    cout << cube1(num1) << "; " << cube1(num2) << endl;
    cout << cube2(num1) << "; " << cube2(num2) << endl;

    cout << pCube1(&num1) << "; " << endl;
    //cout << pCube1(&num2) << "; " << endl;

    return 0;
}

int cube1(int i) {
    i = 0;
    return i * i * i;
}

int cube2(const int i) {
    return i * i * i;
}

int pCube1(int* pi) {
    return (*pi) * (*pi) * (*pi);
}

int pCube2(const int* pi) {
    return (*pi) * (*pi) * (*pi);
}

int pCube3(int* const pi) {
    return (*pi) * (*pi) * (*pi);
}