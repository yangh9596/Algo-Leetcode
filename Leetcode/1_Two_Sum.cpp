//
//  main.cpp
//  1_Two_Sum
//
//  Created by Yolanda on 10/3/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mymap;
        vector<int> ret;
        for (int i = 0; i < nums.size(); i++) {
            auto p = mymap.find(target-nums[i]);
            if (p!=mymap.end()) {
                ret.push_back(p->second);
                ret.push_back(i);
            }
            mymap[nums[i]]=i;
        }
        return ret;
    }
    
};


int main() {
    vector<int> example = {3,2,4,7};
    Solution s1;
    cout << s1.twoSum(example, 6)[0] << ',' << s1.twoSum(example, 6)[1] << endl;
    return 0;
}



