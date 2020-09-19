// 练习-02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    //1.1 actor array has 30 chars;
    char* actor = new char[30];

    //1.2 chuck array has 13 floats;
    float chuck[13] = { 0.1f, 0.2f, 0.3f };

    //2 CandyBar structor
    struct CandyBar
    {
        string brand = "Sweet";
        float sugger = 0.15f;
        int calorie = 120;
    };

    CandyBar snack = {"Mocha Munch", 2.3f, 500};

    snack.brand = "Mocha Munch";
    snack.sugger = 2.3f;
    snack.calorie = 500;

    cout << snack.brand << " " << snack.sugger << " " << snack.calorie << endl;

    //3
    /*float runTime[] = {0, 0, 0};
    cin >> runTime[0];
    cin >> runTime[1];
    cin >> runTime[2];

    float averageTime = (runTime[0] + runTime[1] + runTime[2]) / sizeof(runTime);

    cout << "Run Times are " << sizeof(runTime) << ". Average Time is " << averageTime << endl;*/

    array<float, 3> runTime;

    cin >> runTime[0];
    cin >> runTime[1];
    cin >> runTime[2];

    float averageTime = (runTime[0] + runTime[1] + runTime[2]) / 3;

    cout << averageTime << endl;

    return 0;
}
