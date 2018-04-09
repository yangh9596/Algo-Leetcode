//
//  main.cpp
//  643_Max Average Subarray
//
//  Created by Yang Hu on 04/11/2018.

//  Given an array consisting of n integers, find the contiguous subarray of given length k that has the maximum average value. And you need to output the maximum average value.

/*
You're given a matrix represented by a two-dimensional array, and two positive integers r and c representing the row number and column number of the wanted reshaped matrix, respectively.

The reshaped matrix need to be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the 'reshape' operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.
*/

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int rr = nums.size();
        int cc = nums[0].size();
        int N = r*c;
        if(N != rr*cc)
            return nums;
        vector<vector<int>> ret(r, vector<int>(c, 0));
        for(int i(0); i <= N-1; i++) {
            ret[i/c][i%c] = nums[i/cc][i%cc];
        }
        return ret;
    }
};


int main(int argc, const char * argv[]) {
    vector<vector<int>> mat(2, vector<int>(2,2));
    Solution s1;
    cout << s1.matrixReshape(mat, 1, 4) << endl;
    return 0;
}
