//
//  main.cpp
//  226 Invert an binary tree
//
//  Created by Yolanda on 9/1/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        std::stack<TreeNode*> stk;
        stk.push(root);
        
        while (!stk.empty()) {
            TreeNode* p = stk.top();
            stk.pop();
            if (p) {
                stk.push(p->left);
                stk.push(p->right);
                std::swap(p->left, p->right);
            }
        }
        return root;
    }
};



int main(int argc, const char * argv[]) {
    
    
    
    
    return 0;
}
