// 12-函数与数组.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int sum_arry(const int arr[], int n);
void fill_arry(int arr[], int n);
void ratio(int arr[], int n, int sum);
void print_arry(const int arr[], int n);

int main()
{
	const int size = 6;
	int student1[size] = { 120, 110, 100, 90, 85, 95 };

	int total = sum_arry(student1, size);
	cout << "Total score is " << total << endl;


	int student2[size] = {};

	fill_arry(student2, size);
	total = sum_arry(student2, size);
	cout << "Each subject score is " << endl;
	print_arry(student2, size);
	ratio(student2, size, total);
	cout << "Every subject persentage% " << endl;
	print_arry(student2, size);

    return 0;
}

int sum_arry(const int arr[], int n) {
	int res = 0;
	for (int i = 0; i < n; i++) {
		res += arr[i];
	}

	return res;
}

void fill_arry(int arr[], int n) {
	cout << "Input the score: " << endl;
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}
}

void ratio(int arr[], int n, int sum) {
	for (int i = 0; i < n; i++) {
		arr[i] = arr[i] * 100 / sum;
	}
}

void print_arry(const int arr[], int n){
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
}