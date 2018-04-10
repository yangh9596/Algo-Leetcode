# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def binaryTreePaths(self, root):
        """
            :type root: TreeNode
            :rtype: List[str]
            """
        def path(node, ret, string):
            if not node.left and not node.right:
                ret.append(string + str(node.val))
            if node.left:
                path(node.left, ret, string + str(node.val) + "->")
            if node.right:
                path(node.right, ret, string + str(node.val) + "->")
    
        if not root:
            return []
ret = []
    path(root, ret, "")
    return ret

