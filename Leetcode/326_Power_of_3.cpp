//
//  main.cpp
//  Add to List 350_Intersection of Two Arrays II
//
//  Created by Yang on 9/2/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//  231_Power of 3: Given an integer, write a function to determine if it is a power of 3.

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        return (n>0)&&(log10(n)/log10(3)%1==0); // numeric methods, can be applied to all such power question
    }
};
// 2nd solution: sort and two pointers

int main(int argc, const char * argv[]) {

    return 0;
}
