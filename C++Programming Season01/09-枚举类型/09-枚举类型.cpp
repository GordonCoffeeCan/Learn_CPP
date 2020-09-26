// 09-枚举类型.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum HeroType {
    Tank,
    Magic,
    ADC,
    Assist
};

int main()
{
    HeroType heroType = Tank;

    heroType = ADC;

    cout << heroType << endl;


    return 0;
}
