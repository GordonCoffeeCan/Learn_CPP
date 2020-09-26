//
//  main.cpp
//  05-Const参数
//
//  Created by Gordon Lee on 9/24/20.
//  Copyright © 2020 123. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int num1 = 10;
    const int num2 = 10;
    
    num1 = 20;
    //num2 = 20;
    
    int *p1 = &num1;
    //int *p2 = &num2;
    
    const int *p3 = &num1;
    const int *p4 = &num2;
    
    //int *const int p5 = &num1;
    //int *const int p6 = &num2;
    
    return 0;
}
