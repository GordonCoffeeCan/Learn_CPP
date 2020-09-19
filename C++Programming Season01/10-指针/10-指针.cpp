// 10-指针.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 9.7f;
    int c = 20;

    ////& Get variable addsress;

    //cout << &a << endl;
    //cout << &b << endl;

    ////* Get valriable from an address;

    //cout << *(&a) << endl;

    int* pa = &a;
    float* pb = &b;
    int* p;

    p = pa;

    int* p1;
    int* p2;

    cout << *p1 << endl;
    cout << *p2 << endl;

    //cout << *p << endl;
    //cout << *pa << endl;


    //*pa = 100;

    //cout << *pa << endl;
    //cout << a << endl; 

    /*cout << pa << endl;
    cout << pb << endl;

    cout << *pa << endl;
    cout << *pb << endl;*/




    return 0;
}
