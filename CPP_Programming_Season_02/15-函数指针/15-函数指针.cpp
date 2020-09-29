// 15-函数指针.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

bool lengthCompare(const string& s1, const string& s2);
void display(const string& s1, const string& s2, bool(*p)(const string&, const string&));

int main()
{
    string name1 = "Sandy";
    string name2 = "Jane";

    bool res = lengthCompare(name1, name2);

    bool (*pf)(const string&, const string&);

    pf = lengthCompare;

    /*res = pf(name1, name2);

    if (res) {
        cout << name1 << " string length greater than string of " << name2 << endl;
    }
    else {
        cout << name1 << " string length less than string of " << name2 << endl;
    }*/

    display(name1, name2, pf);

    return 0;
}

bool lengthCompare(const string& s1, const string& s2) {
    return size(s1) > size(s2) ? true : false;
}

void display(const string& s1, const string& s2, bool(*p)(const string&, const string&)) {
    if (p(s1, s2)) {
        cout << s1 << " string length greater than string of " << s2 << endl;
    }
    else {
        cout << s1 << " string length less than string of " << s2 << endl;
    }
}