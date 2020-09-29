// 练习-01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct Game {
	string gameName;
	float gameScore;
};

int main() {
	const int size = 5;
	Game games[size] = {};

	cout << "请输入5个你喜爱的游戏的名称，并给它们评分。（分数为0-10之间的小数）" << endl;
	for (int i = 0; i < size; i++) {
		cout << "请输入游戏名称： ";
		cin >> games[i].gameName;
		cout << "请输入游戏评分: ";
		cin >> games[i].gameScore;
	}

	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			Game temp;
			if (games[i].gameScore < games[j].gameScore) {
				temp = games[i];
				games[i] = games[j];
				games[j] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << i + 1 << " :" << games[i].gameName << "(" << games[i].gameScore << ")" << endl;
	}
	return 0;
}