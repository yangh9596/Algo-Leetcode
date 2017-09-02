//
//  TreeNode.hpp
//  637_Average Binary Tree
//
//  Created by 胡杨 on 2017/7/12.
//  Copyright © 2017年 Yang Hu. All rights reserved.
//

#ifndef TreeNode_hpp
#define TreeNode_hpp

#include <iostream>

// Definition for a binary tree node.
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    // Constructor
    TreeNode();
    TreeNode(int x);
    // Destructor
    ~TreeNode();
};

#endif /* TreeNode_hpp */
