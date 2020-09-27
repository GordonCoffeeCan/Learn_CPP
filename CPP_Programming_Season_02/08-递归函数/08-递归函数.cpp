// 08-递归函数.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

long fact(int i);

int main()
{

    int num;

    cout << "Input a positive number less than 10." << endl;
    cin >> num;
    long res = fact(num);
    cout << num << " fact result is " << res << endl;

    return 0;
}

long fact(int i) {
    long temp;
    if (i == 0) {
        temp = 1;
    }
    else {
        temp = i * fact(i - 1);
    }
    return temp;
}