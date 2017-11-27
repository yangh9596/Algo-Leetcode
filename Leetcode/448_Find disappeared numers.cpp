//
//  main.cpp
//  448. Find All Numbers Disappeared in an Array
//
//  Created by Yolanda on 11/21/17.
//  Copyright © 2017 Yolanda Hu. All rights reserved.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        int temp;
        for(int i=0; i<= len-1; i++) {
            temp = abs(nums[i])-1;
            nums[temp] = nums[temp]>0? -nums[temp]:nums[temp];
        }
        vector<int> ret;
        for(int i=0; i<len; i++) {
            if(nums[i]>0) ret.push_back(i+1);
        }
        return ret;
    }
};

int main() {
    
    return 0;
}



