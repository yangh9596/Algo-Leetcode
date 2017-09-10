//
//  main.cpp
//  Add to List 350_Intersection of Two Arrays II
//
//  Created by Yang on 9/2/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//  231_Power of 4: Given an integer, write a function to determine if it is a power of two.

#include <iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfFour(int num) {
        return (num > 0) && (num & (num - 1)) == 0 && (num - 1) % 3 == 0;
    }
    
};


int main(int argc, const char * argv[]) {

    return 0;
}
