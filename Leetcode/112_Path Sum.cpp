//
//  main.cpp
//  Add to 112_Path Sum: Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.
//
//  Created by Lois on 9/2/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        bool flag=0;
        if (root == NULL) return false;
        if (root->val == sum && root->left ==  NULL && root->right == NULL) return true;
        if (root!=NULL) {
            flag=hasPathSum(root->right,sum-root->val)||hasPathSum(root->left,sum-root->val);
        }
        return flag;
    }
};

// 2nd solution: sort and two pointers

int main(int argc, const char * argv[]) {

    return 0;
}
