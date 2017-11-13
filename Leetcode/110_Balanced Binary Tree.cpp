//
//  main.cpp
/*
 Given a binary tree, determine if it is height-balanced.
 
 For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.
 */
//
//  Created by Lois on 9/2/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//  110 Balanced Binary Tree

#include <iostream>
#include <vector>
using namespace std;
 
class Solution {
public:
    // max depth
    int depth (TreeNode *root) {
        if (root == NULL) return 0;
        int d = max(depth(root -> left), depth (root -> right)) + 1;
        return d;
    }
    
    bool isBalanced (TreeNode *root) {
        if (root == NULL) return 1;
        
        int left=depth(root->left);
        int right=depth(root->right);
        
        return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};
int main(int argc, const char * argv[]) {

    return 0;
}
