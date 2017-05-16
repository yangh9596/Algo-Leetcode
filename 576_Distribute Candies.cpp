//
//  main.cpp
//  Distribute Candies
//
//  Created by Lois on 2017/5/16.
//  Copyright © 2017 Lois Hu. All rights reserved.
//  #576 Distribute Candies

/*  Given an integer array with even length, where different numbers in this array represent different kinds of candies. Each number means one candy of the corresponding kind. You need to distribute these candies equally in number to brother and sister. Return the maximum number of kinds of candies the sister could gain.

    Example 1:
    Input: candies = [1,1,2,2,3,3]
    Output: 3
    Explanation:
    There are three different kinds of candies (1, 2 and 3), and two candies for each kind.
    Optimal distribution: The sister has candies [1,2,3] and the brother has candies [1,2,3], too.The sister has three different kinds of candies.
 
    Keyword: Hash Table, Vector
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> candy_kinds(candies.begin(), candies.end());
        return (candy_kinds.size()>=(candies.size()/2)?candies.size()/2:candy_kinds.size());
    }
};

int main() {
    vector<int> v1={1,1,2,3,3,3,3,4,4,4};
    
    Solution S1;
    cout << S1.distributeCandies(v1) << endl;
    
    
    return 0;
}

