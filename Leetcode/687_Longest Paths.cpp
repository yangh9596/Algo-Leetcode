//
//  687 Longest Univalue Paths
//
//  Created by Yolanda on 11/7/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
/*
 
 Given a binary tree, find the length of the longest path where each node in the path has the same value. This path may or may not pass through the root.
 
 */

#include <iostream>
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
    
    return 0;
}
