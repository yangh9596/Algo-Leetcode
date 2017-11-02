//
//  main.cpp
//  202 Happy number
//  Dynamic Programming
//  Created by Lois on 10/11/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//
/*
 A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
 
 Example: 19 is a happy number
 
 12 + 92 = 82
 82 + 22 = 68
 62 + 82 = 100
 12 + 02 + 02 = 1
 
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int digitSquareSum(int n) {
        int sum = 0;
        while (n) {
            sum += (n%10)*(n%10);
            n /= 10;
        }
        return sum;
    }
    
    
    bool isHappy(int n) {
        int slow, fast;
        slow = fast = n;
        do {
            slow = digitSquareSum(slow);
            fast = digitSquareSum(fast);
            fast = digitSquareSum(fast);
            if(fast == 1) return 1;
        } while(slow != fast);
        return 0;
    }
};

int main(int argc, const char * argv[]) {
    
    return 0;
}
