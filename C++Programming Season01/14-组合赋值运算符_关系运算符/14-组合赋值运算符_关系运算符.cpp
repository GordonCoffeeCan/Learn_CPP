// 14-组合赋值运算符_关系运算符.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*int a = 23, b = 29;

    a += b;

    cout << a << endl;

    a -= b;
    a *= b;*/

    //> < >= <= == !=
    //bool res = 34 > 89;

    //cout << res << endl;

    char str1[] = "siki";
    char str2[] = "siki";

    string str3 = "texthere0";
    string str4 = "texthere0";

    cout << strcmp(str1, str2) << endl;

    cout << (str3 == str4) << endl;

    return 0;
}
