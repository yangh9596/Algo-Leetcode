//
//  main.cpp
//  Add to List 350_Intersection of Two Arrays II
//
//  Created by Lois on 9/2/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret;
        map<int,int> mymap;
        for(int i=0; i<nums1.size();i++)
            mymap[nums1[i]]++;
        for(int i=0; i < nums2.size(); i++) {
            if(--mymap[nums2[i]]>=0)
                ret.push_back(nums2[i]);
        }
        return ret;
    }
};

// 2nd solution: sort and two pointers

int main(int argc, const char * argv[]) {

    return 0;
}
