//
//  main.cpp
//  628_Max
//
//  Created by Yolanda on 10/11/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n1=0,n2=0;
        int p3=0,p4=0,p5=0;
        int ret=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>p5) {
                p3=p4;
                p4=p5;
                p5=nums[i];
            }else if(nums[i]>p4) {
                p3=p4;
                p4=nums[i];
            }else if(nums[i]>p3)
                p3=nums[i];
            
            if(nums[i]<n1) {
                n2=n1;
                n1=nums[i];
            }else if(nums[i]<n2)
                n2=nums[i];
        }
        
        if(nums.size()==3)
            ret=nums[0]*nums[1]*nums[2];
        else ret=max(n1*n2*p5,p3*p4*p5);
        return ret;
    }
};
int main(int argc, const char * argv[]) {
    vector<int> example={1,0,100};
    Solution s1;
    cout << s1.maximumProduct(example) << endl;
    
    return 0;
}
