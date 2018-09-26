# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def kthSmallest(self, root, k):
        """
        :type root: TreeNode
        :type k: int
        :rtype: int
        """
        count = [0]
        ret = [0]
        self.travel(root, k, count, ret)
        return ret[0]

    def travel(self, root, k, count, ret):
        if not root:
            return None
        if root:
            self.travel(root.left, k, count, ret)
            count[0] += 1
            if count[0] == k:
                ret[0] = root.val
            self.travel(root.right, k, count, ret)

            
# if we can modify BST
class Solution(object):
    def kthSmallest(self, root, k):
        """
        :type root: TreeNode
        :type k: int
        :rtype: int
        """
        count = []
        self.helper(root, count)
        return count[k - 1]

    def helper(self, node, count):
        if not node:
            return

        self.helper(node.left, count)
        count.append(node.val)
        self.helper(node.right, count)