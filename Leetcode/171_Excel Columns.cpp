//
//  main.cpp
//  171_Excel Columns
//
//  Created by Yolanda on 10/11/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int col(0);
        for(int i=0;i<s.length();i++)
            col += (s[i]-'A'+1)*pow(26,(s.length()-i-1));
        return col;
    }
};

int main(int argc, const char * argv[]) {
    
    
    return 0;
}
