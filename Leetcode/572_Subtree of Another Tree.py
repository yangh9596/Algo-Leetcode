# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isSubtree(self, s, t):
        """
            :type s: TreeNode
            :type t: TreeNode
            :rtype: bool
            """
        def equal(s, t):
            if (not s) and (not t):
                return True
            if (not s) or (not t):
                return False
            return (s.val == t.val) and equal(s.left, t.left) and equal(s.right, t.right)
        
        def travel(s, t):
            if not s:
                return t == None
            return equal(s, t) or travel(s.left, t) or travel(s.right, t)
        
        return travel(s, t)
