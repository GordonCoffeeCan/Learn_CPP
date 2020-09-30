#include "drug.h"
#include <iostream>

void buyDrug(Drug& d, float& money, int num) {
	if (money >= d.buyPrice * num) {
		money -= d.buyPrice * num;
		d.count += num;
		cout << "Bought Complete!" << endl;
	}
	else {
		cout << "Note: Money is not enough for " << num << " drugs!" << endl;
	}
}

void sellDrug(Drug& d, float& money, int num) {
	if (d.count >= num) {
		d.count -= num;
		money += d.sellPrice * num;
		cout << "Sold!" << endl;
	}
	else {
		cout << "Not enough " << num << " of Drugs to sell!" << endl;
	}
}

void display(Drug d1, Drug d2, float money) {
	cout << "Drug you have now: " << endl;
	cout << "1. Name: " << d1.name << "; Number: " << d1.count << "; Type: " << showType(d1) << "; Buy Price: " << d1.buyPrice << "; Sell Price" << d1.sellPrice << endl;
	cout << "2. Name: " << d2.name << "; Number: " << d2.count << "; Type: " << showType(d2) << "; Buy Price: " << d2.buyPrice << "; Sell Price" << d2.sellPrice << endl;
	cout << "Money: " << money << endl;
	cout << "Complete!" << endl;
	cout << "Enter a number for action." << endl;
}

string showType(Drug d) {
	switch (d.type) {
	case 0:
		return "PlusHP";
		break;
	case 1:
		return "PlusMP";
		break;
	default:
		break;
	}
}