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
        unordered_map<int, int> map;
        int n = (int)nums.size();
        for (int i = 0; i < n; i++) {
            auto p = map.find(target-nums[i]);
            if (p!=map.end()) {
                return {p->second+1, i+1};
            }
            map[nums[i]]=i;
        }
        return nums;
    }
    
};


int main() {
    vector<int> example = {3,2,4,7};
    Solution s1;
    cout << s1.twoSum(example, 6)[0] << ',' << s1.twoSum(example, 6)[1] << endl;
    return 0;
}



