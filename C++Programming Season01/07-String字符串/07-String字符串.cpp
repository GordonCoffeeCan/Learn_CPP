// 07-String字符串.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;

    string str2 = "testString";

    str1 = str2;

    cout << str1 << endl;
    cout << str2 << endl;

    string s = str1 + str2;

    s += str1;

    //getline(cin, str1);

    //cout << str1;

    cout << s << endl;

    cout << str2[3] << endl;
    cout << str1.size() <<endl;
}
