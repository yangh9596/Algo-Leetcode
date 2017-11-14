//
//  main.cpp
//  242_Anagram
//
//  Created by Lois on 10/3/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <unordered_map>
using namespace std;

// Hash table O(n)
class Solution {
public:
    bool isAnagram(string s, string t) {
        bool ret=true;
        if(s.length()!=t.length()) ret = false;
        
        unordered_map<char, int> word;
        
        for(int i=0;i<s.length();i++) {
            word[s[i]]++;
            word[t[i]]--;
        }
        for(auto element : word) {
            if(element.second) ret = false;
        }
        return ret;
    }
};

// Brutal approach: O(nlogn) by sorting

int main(int argc, const char * argv[]) {
    Solution s;
    cout << s.isAnagram("blue", "uelb") << endl;
    return 0;
}
