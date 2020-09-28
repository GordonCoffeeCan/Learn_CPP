// 11-函数重载.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//函数重载：名称相同，参数列表不同。系统会根据传入实参自动调用可用函数。
void print(const char* cp);
void print(const int* beg, const int* end);
void print(const int ia[], size_t size);

int main()
{
    char c = 'a';

    print(&c);

    const size_t size = 5;
    int arr[size] = { 2, 3, 3 };

    print(&arr[2], &arr[size - 1]);

    print(arr, size);

    return 0;
}

void print(const char* cp) {
    cout << "1. " << *cp << endl;
}

void print(const int* beg, const int* end) {
    int length = end - beg;
    for (int i = 0; i <= length; i++) {
        cout << "2. " << *(beg + i) << endl;
    }
}

void print(const int ia[], size_t size) {
    for (int i = 0; i < size; i++) {
        cout << "3. " << ia[i] << endl;
    }
}