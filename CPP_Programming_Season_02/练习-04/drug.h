#pragma once

#ifndef DRUG_H_
#define DRUG_H_

#include <string>
using namespace std;

enum Type {
	PlusHP,
	PlusMP
};

struct Drug {
	string name;
	Type type;
	int count;
	float buyPrice;
	float sellPrice;
};

const float ratio = 0.75f;
constexpr float sellPrice(Drug& d) { return d.buyPrice * ratio; }

void buyDrug(Drug& d, float& money, int num);
void sellDrug(Drug& d, float& money, int num);
void display(Drug d1, Drug d2, float money);
string showType(Drug d);

#endif // !DRUG_H_
