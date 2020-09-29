#pragma once

#ifndef GAME_H_
#define GAME_H_
#include <iostream>
#include <string>

using namespace std;

struct Game {
	string gameName;
	float gameScore;
};

void inputGame(Game game[], int size);
void sort(Game game[], int size);
void display(Game game[], int size);

const int Size = 5;

#endif // !GAME_H_
