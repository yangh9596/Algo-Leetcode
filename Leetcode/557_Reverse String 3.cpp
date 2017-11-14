//
//  main.cpp
//  557 Reverse String III
//
//  Created by Lois on 2017/5/16.
//  Copyright © 2017 Lois Hu. All rights reserved.
//  557 Reverse strings with spaces

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        for (int i = 0; i <= s.length()-1; i++) {
            if (s[i] != ' ') {   // when i is a non-space
                int j = i;
                while( j <= s.length()-1 && s[j] != ' ') { j++;} // push j to next space
                reverse(s.begin() + i, s.begin() + j);
                i = j - 1;
            }
        }
        
        return s;
    }
};

int main() {

    
    return 0;
}

