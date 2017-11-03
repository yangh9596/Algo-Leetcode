//
//  main.cpp
//  169_Majority Element
//
//  Created by 胡杨 on 10/11/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=0;
        
        map<int,int> container;
        for(auto k:nums) {
            container[k]++;
        }
        
        for(map<int,int>::iterator it=container.begin();it!=container.end();++it) {
            if(it->second > nums.size()/2) {
                majority = it->first;
                break;
            }
        }
        return majority;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> example={1,1,1,1,2,3,6,3,1};
    Solution s1;
    cout << s1.majorityElement(example) << endl;
    
    return 0;
}
