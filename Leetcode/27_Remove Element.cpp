//
//  main.cpp
//  Add to List 26_Remove Duplicates from Sorted Array
//
//  Created by Yolanda on 10/5/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

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
    vector<int> v{1,1,2,9,2,11};
    Solution s1;
    cout << s1.removeElement(v,2) << endl;
    
    return 0;
}
