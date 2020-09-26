//
//  main.cpp
//  04-传引用参数
//
//  Created by Dev_Mac on 9/24/20.
//  Copyright (c) 2020 Dev_Mac. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void reset(int &i);

int min(int num1, int num2, int num3, int &max);

int main()
{
    int num = 10;
    
    reset(num);
    cout << num << endl;
    
    int maxNum;
    int minNum;
    
    minNum = min(20, 15, 23, maxNum);
    
    cout << "Max Number: " << maxNum << "; Min Number: " << minNum << endl;
    
    return 0;
}

void reset(int &i){
    i *= 2;
}

int min(int num1, int num2, int num3, int& max){
    int temp1, temp2;
    
    temp1 = num1 < num2 ? num1 : num2;
    temp1 = temp1 < num3 ? temp1 : num3;
    
    temp2 = num1 > num2 ? num1 : num2;
    temp2 = temp2 > num3 ? temp2 : num3;
    
    max = temp2;
    
    return temp1;
}