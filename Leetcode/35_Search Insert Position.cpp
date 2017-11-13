//
//  main.cpp
//  35_Search Insert Position
//
//  Created by Yolanda on 10/5/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
/*
 Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
 
 You may assume no duplicates in the array.
 */

#include <vector>
#include <iostream>
using namsspace std;

// Brutal method
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int id = nums.size();
        
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == target) {id = i; break;}
            if(nums[i] > target) {
                id = i;
                break;
            }
            
        }
        return id;
    }
};

// Binary search (bisection) O(logn)

class Solution2 {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        
        // Invariant: the desired index is between [low, high+1]
        while (low <= high) {
            int mid = low + (high-low)/2;
            
            if (nums[mid] < target)
                low = mid+1;
            else if(nums[mid] == target)
                return mid;
            else high = mid-1;
        }
        
        // (1) At this point, low > high. That is, low >= high+1
        // (2) From the invariant, we know that the index is between [low, high+1], so low <= high+1. Follwing from (1), now we know low == high+1.
        // (3) Following from (2), the index is between [low, high+1] = [low, low], which means that low is the desired index
        //     Therefore, we return low as the answer. You can also return high+1 as the result, since low == high+1
        
        return low;
    }
};

int main(int argc, const char * argv[]) {
    
    return 0;
}
