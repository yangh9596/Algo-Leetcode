//
//  main.cpp
//  344_Reverse String
//
//  Created by Yolanda on 10/5/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    string reverseString(string s) {
        stack<char> st;
        string ret(s);
        for(int i=0;i<s.length();i++) {
            st.push(s[i]);
        }
        for(int i=0;i<s.length();i++) {
            ret[i]=st.top();
            st.pop();
        }
        return ret;
    }
};

// Another approach (without using stack)
class Solution2 {
public:
    string reverseString(string s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j){
            swap(s[i++], s[j--]);
        }
        
        return s;
    }
};

int main(int argc, const char * argv[]) {
    Solution s1;
    string s("Hello");
    cout << s1.reverseString(s) << endl;
    return 0;
}
