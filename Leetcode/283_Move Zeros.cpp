//
//  main.cpp
//  263_Ugly Number
/*
 Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
 
 For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
 You must do this in-place without making a copy of the array
 */
//
//  Created by Yolanda on 10/3/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//  Two pointers

#include <iostream>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i =0; i<nums.size(); i++) {
            if(nums[i]!=0) {
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return;
    }
};

int main(int argc, const char * argv[]) {
    
    return 0;
}
