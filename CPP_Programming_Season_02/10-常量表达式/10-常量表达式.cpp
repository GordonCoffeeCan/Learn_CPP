// 10-常量表达式.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//常量表达式函数
constexpr int fact(int n) {
    return n == 1 ? 1 : fact(n - 1) * n;
}

//常量表达式
constexpr int num = 5;

int main()
{
    //编译期间计算结果并返回
    cout << fact(num) << endl;
    cout << fact(3) << endl;

    //普通函数形式，程序运行时返回结果
    int i = 8;
    int res = fact(i);
    cout << res << endl;
    return 0;
}

