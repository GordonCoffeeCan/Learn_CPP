// 10-指针.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    /*int a = 10;
    float b = 9.7f;
    int c = 20;*/

    ////& Get variable addsress;

    //cout << &a << endl;
    //cout << &b << endl;

    ////* Get valriable from an address;

    //cout << *(&a) << endl;

    /*int* pa = &a;
    float* pb = &b;
    int* p;

    p = pa;

    int* p1 = NULL;
    int* p2 = 0;
    int* p3 = nullptr;*/

    //void* vP;//accept any kind of address;

    //vP = &a;

    //cout << *p1 << endl;
    //cout << *p3 << endl;

    //cout << *(int*)vP << endl;

    //cout << *p << endl;
    //cout << *pa << endl;


    //*pa = 100;

    //cout << *pa << endl;
    //cout << a << endl; 

    /*cout << pa << endl;
    cout << pb << endl;

    cout << *pa << endl;
    cout << *pb << endl;*/

    int* p = new int;
    *p = 100;
    cout << *p << endl;
    delete p;

    return 0;
}
