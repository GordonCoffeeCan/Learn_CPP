// 练习-01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float heightM = 0;
    int heightCM = 0;

    cin >> heightM;

    heightCM = heightM * 100;

    cout << "Height in CM is "<< heightCM << "cm" << endl;

    //////////////////////////////////////////////////////////////

    int second = 0;
    int day = 0;
    int hour = 0;
    int minute = 0;

    cin >> second;

    day = second / (3600 * 24);
    hour = (second % (3600 * 24)) / 3600;
    minute = (second - day * (3600 * 24) - hour * 3600) / 60;
    int newSecond = second - day * (3600 * 24) - hour * 3600 - minute * 60;

    cout << day << " Day " << hour << " Hour " << minute << " Minutes " << newSecond << " Second" << endl;

    ///////////////////////////////////////////////////////////////////////////

    int boy = 0;
    int girl = 0;
    int allNumber = 0;

    cout << "How many boys?" << endl;
    cin >> boy;
    cout << "How many girls?" << endl;
    cin >> girl;

    allNumber = boy + girl;

    float persentage = float(girl) / float(allNumber) * 100;

    cout << "Girl in the Class is " << persentage << "%" << endl;

    return 0;
}