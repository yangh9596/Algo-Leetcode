//
//  main.cpp
//  20_Valid Parentheses
//
//  Created by Yolanda on 10/5/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;
        for (char& c : s) {
            switch (c) {
                case '(':
                case '{':
                case '[': paren.push(c); break;
                case ')': if (paren.empty() || paren.top()!='(') return false; else paren.pop(); break;
                case '}': if (paren.empty() || paren.top()!='{') return false; else paren.pop(); break;
                case ']': if (paren.empty() || paren.top()!='[') return false; else paren.pop(); break;
                default: ; // pass
            }
        }
        return paren.empty() ;
    }
};

int main(int argc, const char * argv[]) {

    
    return 0;
}
