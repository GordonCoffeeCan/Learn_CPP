// 16-分离式编译.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "game.h"

using namespace std;

int main()
{
    cout << "Input 5 games name and score them." << endl;

    Game games[Size] = {};

    inputGame(games, Size);
    sort(games, Size);
    display(games, Size);

    return 0;
}