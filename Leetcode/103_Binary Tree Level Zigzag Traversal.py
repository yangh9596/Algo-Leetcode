# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

# dfs
class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        ret = []
        self.dfs(root, 0, ret)
        return ret
    def dfs(self, root, level, ret):
        if root:
            if len(ret) < level +1:
                ret.append([])
            if not level%2:
                ret[level].append(root.val)
            else:
                ret[level].insert(0, root.val)
            self.dfs(root.left, level+1, ret)
            self.dfs(root.right, level+1, ret)