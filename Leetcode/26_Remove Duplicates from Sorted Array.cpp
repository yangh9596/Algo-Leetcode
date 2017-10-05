//
//  main.cpp
//  Add to List 26_Remove Duplicates from Sorted Array
//
//  Created by Yolanda on 10/5/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i< nums.size() ;i++) {
            if(nums[i]!=nums[j]) {
                nums[j] = nums[i];
                j++;
            }
            
        }
        return (j+1);
    }
};

int main(int argc, const char * argv[]) {
    vector<int> v{1,1,2,9,11};
    Solution s1;
    cout << s1.removeDuplicates(v) << endl;
    
    return 0;
}
