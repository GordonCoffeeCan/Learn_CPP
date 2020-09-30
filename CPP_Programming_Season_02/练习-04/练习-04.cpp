// 练习-04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "drug.h"

int main()
{
    cout << "1. Buy HP Drug. " << "2. Buy MP Drug. " << "3. Sell HP Drug. " << "4. Sell MP Drug. " << "5. Show Drug count and Money. " << "6. Exit" << endl;

    Drug mpDrug = { "MP Drug", PlusHP, 10, 150, sellPrice(mpDrug) };
    Drug hpDrug = { "HP Drug", PlusHP, 20, 100, sellPrice(hpDrug) };
    float totalMoney = 1000;

    cout << "Input number to do action" << endl;
    int input = 0;
    int num = 0;

    while (cin >> input && input > 0 && input < 6) {
        if (input == 1) {
            cout << "Input buy count" << endl;
            if (cin >> num && num > 0) {
                buyDrug(hpDrug, totalMoney, num);
                cout << "Enter a number for action." << endl;
            }
            else {
                cout << "Unrecognize number, please re-enter." << endl;
            }
        }
        else if (input == 2) {
            cout << "Input buy count" << endl;
            if (cin >> num && num > 0) {
                buyDrug(mpDrug, totalMoney, num);
                cout << "Enter a number for action." << endl;
            }
            else {
                cout << "Unrecognize unmber, please re-enter." << endl;
            }
        }else if (input == 3) {
            cout << "Please enter how many you'd like to sell." << endl;
            if (cin >> num && num > 0) {
                sellDrug(hpDrug, totalMoney, num);
                cout << "Enter a number for action." << endl;
            }
        }else if (input == 4) {
            cout << "Please enter how many you'd like to sell." << endl;
            if (cin >> num && num > 0) {
                sellDrug(mpDrug, totalMoney, num);
                cout << "Enter a number for action.";
            }
        }else {
            display(hpDrug, mpDrug, totalMoney);
        }
    }

    return 0;
}