//
//  main.cpp
//  461 Hamming Distance
//
//  Created by Yolanda on 10/3/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//  The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int num=x^y;
        //int num=(~(x&y))&(x|y);
        int dist(0);
        while(num) {
            dist++;
            num &= num-1;
        }
        return dist;
    }
};


int main() {
    
    return 0;
}



