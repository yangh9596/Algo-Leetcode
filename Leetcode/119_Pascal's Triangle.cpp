//
//  main.cpp
//  119_ Pascal's Triangle II
//
//  Created by 胡杨 on 9/1/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vi(rowIndex + 1);
        vi[0] = 1;
        for (int i = 0; i <= rowIndex ; ++i)
        {
            for (int j = i; j > 0; --j)
            {
                vi[j] = vi[j] + vi[j-1];
            }
        }
        return vi;
    }
};

int main(int argc, const char * argv[]) {
    
    
    
    
    return 0;
}
