# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def findTarget(self, root, target):
        """
        :type root: TreeNode
        :type k: int
        :rtype: bool
        """
        table = {}
        seen = set([root])
        Q = [root]
        while Q:
            cur = Q.pop(0)
            if not cur:
                return False
            if target - cur.val in table:
                return True
            table[cur.val] = cur
            if cur.left not in seen and cur.left:
                seen.add(cur.left)
                Q.append(cur.left)
            if cur.right not in seen and cur.right:
                seen.add(cur.right)
                Q.append(cur.right)
        return False


# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
# DFS
class Solution(object):
    def findTarget(self, root, target):
        """
        :type root: TreeNode
        :type k: int
        :rtype: bool
        """
        Hash = set()
        return self.DFS(root, target, Hash)

    def DFS(self, root, target, Hash):
        if not root:
            return False
        if target - root.val in Hash:
            return True
        Hash.add(root.val)
        return self.DFS(root.left, target, Hash) or self.DFS(root.right, target, Hash)


