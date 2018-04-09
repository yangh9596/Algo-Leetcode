//
//  main.cpp
//  27 Remove elements
//
//  Created by Yolanda on 10/5/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//  Two pointers

#include <vector>
#include <iostream>
using namsspace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for(int i = 0; i<nums.size();i++) {
            if(nums[i]!=val) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main(int argc, const char * argv[]) {
    
    return 0;
}
