//
//  main.cpp
//  Distribute Candies
//
//  Created by Lois on 2017/11/13.
//  Copyright © 2017 Lois Hu. All rights reserved.
//  #581 Shorted Unsorted Subarray
/*
 Given an integer array, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order, too.
 
 You need to find the shortest such subarray and output its length.
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int l=0, r = nums.size()-1, Ma(INT_MIN), Mi(INT_MAX);
        
        while( l < r && nums[l] <= nums[l+1]) l++;
        if(r <= l) return 0;
        while( r > 0 && nums[r] >= nums[r-1]) r--;
        
        for(int i=l; i <= r; i++) {
            Ma = max(Ma, nums[i]);
            Mi = min(Mi, nums[i]);
        }
        
        while(nums[l] > Mi && l >= 0) l--;
        while(nums[r] < Ma && r < nums.size()) r++;
        
        return (r-l-1);
    }
};

int main() {
    return 0;
}

