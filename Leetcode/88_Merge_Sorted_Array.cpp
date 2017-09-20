//
//  main.cpp
//  88_Merge_Sorted_Array
//
//  Created by Lois on 9/20/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        
        while(k>=0&&j>=0) {
            if( (nums1[i]>nums2[j]) && (i>=0) ) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};

int main(int argc, const char * argv[]) {
    vector<int> v1{1,3,0,0,0,0};

    vector<int> v2{2,4,5,7};
    Solution s1;
    s1.merge(v1,2,v2,4);
    
    vector<int>::iterator it;
    for(it=v1.begin();it!=v1.end();it++)
        cout << *it  << ' ';
    cout << endl;
    return 0;
}


