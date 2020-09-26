// 练习-04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//1.
	cout << "第一题" <<endl;
    char grades[] = {'A', 'B', 'C', 'D'};
    char grade;
	for (int i = 0; i < 4; i++) {
		grade = grades[i];

		switch (grade) {
		case 'A':
			cout << "a_grade++" << endl;
			break;
		case 'B':
			cout << "b_grade++" << endl;
			break;
		case 'C':
			cout << "c_grade++" << endl;
			break;
		case 'D':
			cout << "d_grade++" << endl;
			break;
		default:
			cout << "f_grade++" << endl;
			break;
		}
	}

	//2.
	cout << "第二题" << endl;

}