//
//  main.cpp
//  104 Max Depth of a tree
//  Created by Lois on 9/2/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//
/*
 Given a binary tree, find its maximum depth.
 
 The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->left==NULL) return 1+maxDepth(root->right);
        if(root->right==NULL) return 1+maxDepth(root->left);
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
};

int main(int argc, const char * argv[]) {

    return 0;
}
