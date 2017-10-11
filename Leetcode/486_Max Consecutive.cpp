//
//  main.cpp
//  485 Max Consecutive ones
//
//  Created by Yolanda on 10/3/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ret=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==1) {
                count++;
            }else {
                count=0;
            }
            ret = max(ret,count);
        }
        return ret;
    }
};


int main() {
    vector<int> example({1,1,0,1});
    Solution s1;
    cout << s1.findMaxConsecutiveOnes(example) << endl;
    return 0;
}



