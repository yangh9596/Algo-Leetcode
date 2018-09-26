# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if not root:
            return True
        return self.travel(root, float('inf'), float('-inf'))

    def travel(self, cur, upper, lower):
        if not cur:
            return True
        if cur.val >= upper or cur.val <= lower:
            return False
        return self.travel(cur.left, min(upper, cur.val), lower) and \
               self.travel(cur.right, upper, max(lower, cur.val))


