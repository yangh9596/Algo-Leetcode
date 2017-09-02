//
//  main.cpp
//  637_Average Binary Tree
//
//  Created by Lois on 2017/7/12.
//  Copyright © 2017 Yang Hu. All rights reserved.
//
/*
 Given a non-empty binary tree, return the average value of the nodes on each level in the form of an array.
 Input:
   3
  / \
 9  20
   /  \
  15   7
 Output: [3, 14.5, 11]
 Explanation:
 The average value of nodes on level 0 is 3,  on level 1 is 14.5, and on level 2 is 11. Hence return [3, 14.5, 11].

 */



#include <iostream>
#include <vector>
#include <queue>
#include "TreeNode.hpp"

using namespace std;


vector<double> averageOfLevels(TreeNode* root);

int main() {
    
    TreeNode root(7);
    TreeNode n1(5);
    TreeNode n2(10);
    root.left = &n1;
    root.right = &n2;
    
    TreeNode n4(8);
    TreeNode n5(11);
    n2.left = &n4;
    n2.right = &n5;
    
    vector<double> v = averageOfLevels(&root);
    for(int i = 0;i<v.size();i++)
        cout << v[i] << ", ";
    cout << endl;
    
    return 0;
}



// Solution
vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> m_q;
        m_q.push(root);
        vector<double> result;
        while (!m_q.empty())
        {
            double s=0;
            int n=m_q.size();
            for(int i=0;i<n;i++)
            {s+=m_q.front()->val;
                if(m_q.front()->left)m_q.push(m_q.front()->left);
                if(m_q.front()->right)m_q.push(m_q.front()->right);
                m_q.pop();
            }
            s/=n;
            result.push_back(s);
        }
        return result;
}
