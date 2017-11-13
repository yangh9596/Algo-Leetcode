//
//  main.cpp
//  100 same tree
//
//  Created by Lois on 9/2/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//
/*
 Given two binary trees, write a function to check if they are the same or not.
 
 Two binary trees are considered the same if they are structurally identical and the nodes have the same value.
 */
#include <iostream>

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool flag=0;
        if(p==NULL||q==NULL)
            flag=(p==q);
        else flag=(p->val==q->val)&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
        return flag;
    }
};

int main(int argc, const char * argv[]) {

    
    return 0;
}
