//
//  main.cpp
//  Add to List 350_Intersection of Two Arrays II
//
//  Created by 胡杨 on 9/2/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> dict;
        vector<int> res;
        for(int i = 0; i < (int)nums1.size(); i++) dict[nums1[i]]++;
        for(int i = 0; i < (int)nums2.size(); i++)
            if(--dict[nums2[i]] >= 0) res.push_back(nums2[i]);
        return res;
    }
};

// 2nd solution: sort and two pointers

int main(int argc, const char * argv[]) {

    return 0;
}
