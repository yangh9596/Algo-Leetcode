//
//  main.cpp
//  53 Max subarry
//
//  Created by Lois on 9/20/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//  Find the contiguous subarray within an array (containing at least one number) which has the largest sum

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int MaxSum = INT_MIN;
        int Sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            Sum += nums[i];
            MaxSum = max(Sum, MaxSum);
            Sum = max(Sum,0);
        }
        return MaxSum;
    }
};

int main(int argc, const char * argv[]) {

    return 0;
}


