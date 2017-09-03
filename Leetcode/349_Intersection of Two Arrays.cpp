//
//  main.cpp
//  Add to List 349_Intersection of Two Arrays
//
//  Created by 胡杨 on 9/2/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

/*
 Given two arrays, write a function to compute their intersection.
 
 Example:
 Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].
 
 Note:
 Each element in the result must be unique.
 The result can be in any order.
 */


#include <iostream>
#include <vector>
#include <set>
using namespace std;

// This solution might be inefficient and space-consuming
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // sort and unique array 1 and array 2
        sort(nums1);
        sort(nums2);
        
        // unique
        vector<int> v1 = unique(nums1);
        vector<int> v2 = unique(nums2);
        
        vector<int> ret;
        bool equal=0;
        for(int i=0;i<v1.size();i++) {
            equal=0;
            for(int j = 0; j < v2.size();j++) {
                if(v1[i]==v2[j]) {
                    equal = 1;
                    break;
                }
            }
            if(equal)
                ret.push_back(v1[i]);
        }
        
        return ret;
    }
    
    
    vector<int> unique(vector<int>& nums1) {
        vector<int> v1;
        for(int i = 0; i < nums1.size(); i++) {
            if(v1.empty()||v1.back()!=nums1[i])
                v1.push_back(nums1[i]);
        }
        return v1;
    }
    
    // ascending
    void sort(vector<int>& nums1) {
        for(int i = 0;i < nums1.size(); i++){
            int temp = nums1[i];
            int index = i;
            for(int j=i;j< nums1.size();j++){
                if(temp > nums1[j]){
                    temp = nums1[j];
                    index = j;
                }
            }
            nums1[index] = nums1[i]; // Exchange the place
            nums1[i] = temp;
        }
    }
    
};



int main(int argc, const char * argv[]) {
    // set stores elements in an ordered sequence
    
    vector<int> v1{2,1,1,3,4,4,5};
    set<int> s(v1.begin(),v1.end());
    for(set<int>::iterator it =s.begin();it != s.end();++it)
        cout << *it << endl;
    
    
    return 0;
}
