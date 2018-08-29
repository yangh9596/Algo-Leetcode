# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def leafSimilar(self, root1, root2):
        """
        :type root1: TreeNode
        :type root2: TreeNode
        :rtype: bool
        """
        return self.leafSequence(root1) == self.leafSequence(root2)

    def leafSequence(self, node):
        if not node:
            return []
        if not node.left and not node.right:
            return [node.val]
        return self.leafSequence(node.left) + self.leafSequence(node.right)
