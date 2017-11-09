//
//  main.cpp
//  669. Trim a Binary Search Tree
//
//  Created by Yolanda on 10/25/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
using namespace std;
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (root == NULL) return NULL;
        if (root->val < L) return trimBST(root->right, L, R);
        if (root->val > R) return trimBST(root->left, L, R);
        root->left = trimBST(root->left, L, R);
        root->right = trimBST(root->right, L, R);
        return root;
    }
};
int main(int argc, const char * argv[]) {
    return 0;
}
