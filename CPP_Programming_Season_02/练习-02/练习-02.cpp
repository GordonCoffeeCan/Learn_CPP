// 练习-02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

float harmonicMean(float a, float b);

int main()
{

    float num1, num2;

    cout << "Input 2 numbers." << endl;

    while(cin >> num1 >> num2 && num1 != 0 && num2 != 0){
        cout << num1 << " and " << num2 << " 's Harmonic Mean is "<< endl;
        cout << harmonicMean(num1, num2) << endl;
        cout << "Input 2 numbers." << endl;
    }

    return 0;
}

float harmonicMean(float a, float b) {
    return 2 * a * b / (a + b);
}