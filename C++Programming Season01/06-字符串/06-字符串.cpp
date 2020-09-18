// 06-字符串.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    //char website[] = {'s', 'k', 'i'};

    //char website[] = "sikiedu";

    /*char website[20];

    cin >> website;

    cout << website << endl;*/

    char name[30];
    char food[20];

    cin.getline(name, 30);
    cin.getline(food, 20);

    cout << name << " likes to eat " << food << endl;

    return 0;
}
