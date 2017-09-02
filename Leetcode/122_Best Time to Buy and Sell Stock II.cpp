//
//  main.cpp
//  122_Best Time to Buy and Sell Stock II
//
//  Created by 胡杨 on 8/31/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//  Say you have an array for which the ith element is the price of a given stock on day i.

//  Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Profit = 0;
        if(prices.size()>=1) {
            for(int i = 0; i< (prices.size()-1); i++)
                Profit += max(0,(prices[i+1]-prices[i]));
        }
        return Profit;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> example{1,4,7,3,2,4,3};
    Solution s1;
    cout << s1.maxProfit(example) << endl;
    return 0;
}
