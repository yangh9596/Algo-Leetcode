//
//  main.cpp
//  674_Longest Continuous Increasing Subsequence
//
//  Created by 胡杨 on 10/25/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int key=0;
        int temp=0;
        if(!nums.empty()) {
            key=1;
            temp=1;
            for(int i=0;i<nums.size()-1;i++) {
                if(nums[i]<nums[i+1]) {
                    temp++;
                } else {
                    key=max(key,temp);
                    temp=1;
                }
                key = max(key,temp);
            }
        }
        return key;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> v1{1,3,5,4,2,3,4,5};
    Solution s1;
    cout << s1.findLengthOfLCIS(v1) << endl;
    
    
    return 0;
}
