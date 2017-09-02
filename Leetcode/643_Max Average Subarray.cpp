//
//  main.cpp
//  643_Max Average Subarray
//
//  Created by 胡杨 on 9/1/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//  Given an array consisting of n integers, find the contiguous subarray of given length k that has the maximum average value. And you need to output the maximum average value.

#include <iostream>
#include <vector>
using namespace std;


// Time complexity O(n), Space complexity O(1)
// Moving window
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int i = 0; i<= k-1;i++)
            sum += nums[i];
        double ret = sum;
        for(int i = 1; i <= nums.size()-k; i++) {
            sum += nums[i+k-1];
            sum -= nums[i-1];
            ret = max(ret,sum);
        }
        return (ret/=k);
    }
};

// Another appoach, time O(n) and space O(n)


int main(int argc, const char * argv[]) {
    vector<int> v1 {2,4,6,3,21,-4,5,12};
    Solution s1;
    cout << s1.findMaxAverage(v1, 3) << endl;
    return 0;
}
