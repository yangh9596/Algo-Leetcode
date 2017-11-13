//
//  main.cpp
//  167 Two sum (sorted array)
//
//  Created by 胡杨 on 10/11/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
using namespace std;
// shrink the range
vector<int> twoSum(vector<int>& numbers, int target) {
    int lo=0, hi=numbers.size()-1;
    while (numbers[lo]+numbers[hi]!=target){
        if (numbers[lo]+numbers[hi]<target){
            lo++;
        } else {
            hi--;
        }
    }
    return vector<int>({lo+1,hi+1});
}

int main(int argc, const char * argv[]) {
    
    return 0;
}
