// 20-Switch语句.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum HeroType {
	Tank,
	Magic,
	ADC,
	Assist
};

int main()
{
	HeroType heroType = Magic;

	switch (heroType) {
	case Tank:
		cout << "Tank" << endl;
		break;
	case Magic:
		cout << "Magic" << endl;
		break;
	case ADC:
		cout << "ADC" << endl;
		break;
	case Assist:
		cout << "Assist" << endl;
		break;
	default:
		cout << "Not support" << endl;
		break;
	}
}