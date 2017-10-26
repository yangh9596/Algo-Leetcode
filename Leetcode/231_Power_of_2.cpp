//
//  main.cpp
//  
//
//  Created by Yang on 9/2/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//  231_Power of 2: Given an integer, write a function to determine if it is a power of two.

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n>0)&&!(n&(n-1)); // be careful of n = 0!!!
    }
};

// 2nd solution: sort and two pointers

int main(int argc, const char * argv[]) {

    return 0;
}
