# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def preorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        ret = []
        self.travel(root, ret)
        return ret

    def travel(self, root, output):
        if not root:
            return None
        output.append(root.val)
        self.travel(root.left, output)
        self.travel(root.right, output)