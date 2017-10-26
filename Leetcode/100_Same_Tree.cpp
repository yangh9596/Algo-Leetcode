//
//  main.cpp
//  Add to List 100 same tree
//
//  Created by Lois on 9/2/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//



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
