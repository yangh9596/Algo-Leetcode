//
//  main.cpp
//  121_Best Time to Buy and Sell Stock
//
//  Created by 胡杨 on 8/30/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//  We need to find out the maximum difference (which will be the maximum profit) between two numbers in the given array. Also, the second number (selling price) must be larger than the first one (buying price).

//  In formal terms, we need to find \max(prices[j] - prices[i])max(prices[j]−prices[i]), for every ii and jj such that j > ij>i.

//  It is a max-subarray problem

// Solution1 O(n^2) Brutal solution

// Solution2 O(n) Better Brutal

// Solution3 O(nlog(n)) Divide and Conquer

#include <iostream>
#include <vector>
using namespace std;

class Solution1 {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit = 0;
        for(int i = 0; i < prices.size();i++) {
            for( int j = i +1; j < prices.size(); j++) {
                if(MaxProfit < (prices[j] - prices[i]))
                    MaxProfit = prices[j] - prices[i];
            }
        }
        return MaxProfit;
    }
};

class Solution2 {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit = 0;
        int MinPrice = INT_MAX;
        for(int i = 0; i < prices.size();i++) {
            if(prices[i] < MinPrice)
                MinPrice = prices[i];
            else if(MaxProfit < (prices[i]-MinPrice))
                MaxProfit = (prices[i]-MinPrice);
        }
        return MaxProfit;
    }
};

class Solution3 {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit = 0;
        int MinPrice = INT_MAX;
        // refer to the max-subarray question
        return MaxProfit;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> example{7, 1, 5, 3, 6, 4};
    
    Solution1 s1;
    cout << s1.maxProfit(example) << endl;
    
    Solution2 s2;
    cout << s2.maxProfit(example) << endl;
    
    
    return 0;
}

