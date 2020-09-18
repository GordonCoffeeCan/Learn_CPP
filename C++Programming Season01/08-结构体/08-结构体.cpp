// 08-结构体.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Position {
    float x;
    float y;
    float z;
};

struct MyHero {
    string name;
    int hp;
    int attack;
    Position pos;
};

int main() {
    Position playerPos = {3.2, 6.2, 3.1};
    cout << playerPos.x << playerPos.y << playerPos.z << endl;

    playerPos.y = 100.01;

    cout << playerPos.x << playerPos.y << playerPos.z << endl;

    Position enmyPos;

    Position enemysPos[]{ {1,1,1}, {1, 2, 3}, {5.2, 5.1, 6.1}, {1.2, 1.3, 1.4}, {0,1,1}, {1,0,1}, {1,1,0} };
}
