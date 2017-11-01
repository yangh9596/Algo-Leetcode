//
//  main.cpp

//
//  Created by Lois on 9/2/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->left==NULL) return minDepth(root->right);
        if(root->right==NULL) return minDepth(root->left);
        return 1+min(minDepth(root->left),minDepth(root->right));
    }
};
int main(int argc, const char * argv[]) {

    return 0;
}
