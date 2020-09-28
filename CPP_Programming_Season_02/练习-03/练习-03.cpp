// 练习-03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void inputScore(int arr[], int n);
void printScore(int arr[], int n);
void avarageScore(int arr[], int n);

int main()
{
    const int size = 10;
    int score[size] = {};

	cout << "Input maximum 10 shoot score, input nagative number for end inputing: " << endl;
	inputScore(score, size);
	printScore(score, size);
	avarageScore(score, size);
}

void inputScore(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> arr[i];

		if (arr[i] < 0) {
			return;
		}
	}
}

void printScore(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			cout << "Round " << i << ": " << arr[i] << endl;
		}
	}
}

void avarageScore(int arr[], int n) {
	int total = 0;
	int times = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			total += arr[i];
			times++;
		}
	}
	cout << "The avarage score is " << ((float)total / (float)times) << endl;
}