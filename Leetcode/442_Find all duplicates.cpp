//
//  main.cpp
//  442. Find All Duplicates
//
//  Created by Yolanda on 11/21/17.
//  Copyright © 2017 Yolanda Hu. All rights reserved.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int len = nums.size();
        int idx;
        vector<int> ret;
        for(int i=0; i<len; i++) {
            idx = abs(nums[i])-1; // index starts from 0
            if(nums[idx]<0) ret.push_back(abs(idx+1));
            nums[idx] = (nums[idx]>0)?-nums[idx]:nums[idx];
            
        }
        return ret;
    }
};

int main() {
    
    return 0;
}



