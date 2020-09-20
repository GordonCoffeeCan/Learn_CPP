// 16-类型别名.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//宏方式 Macro method
#define END return 0;
#define FString string

//类型别名方式
typedef string UString;

int main()
{

    FString name = "siki";
    cout << name << endl;

    UString nickName = "this is a nick name";

    cout << nickName << endl;

    END
}