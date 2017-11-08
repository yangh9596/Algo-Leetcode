//
//  main.cpp
//  687 Longest Paths
//
//  Created by Yolanda on 9/1/17.
//  Copyright © 2017 Yang Hu. All rights reserved.

#include <iostream>
#include <vector>
using namespace std;


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int helper(TreeNode* root, int val)
    {
        if(!root || root->val != val) return 0;
        return 1 + max(helper(root->left,val),helper(root->right,val));
    }
    int longestUnivaluePath(TreeNode* root) {
        if(!root) return 0;
        int sub = max(longestUnivaluePath(root->left),longestUnivaluePath(root->right));
        return max(sub,helper(root->left,root->val) + helper(root->right,root->val));
    }
};

int main(int argc, const char * argv[]) {
    vector<int> v1 {2,4,6,3,21,-4,5,12};
    Solution s1;
    cout << s1.findMaxAverage(v1, 3) << endl;
    return 0;
}
