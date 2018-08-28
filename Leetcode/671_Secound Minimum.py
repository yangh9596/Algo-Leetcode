# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def findSecondMinimumValue(self, root):
        res = [float('inf')]
        def traverse(node):
            if not node:
                return
            if root.val < node.val < res[0]:
                res = node.val
            traverse(node.left)
            traverse(node.right)
        traverse(root)
        return -1 if res[0] == float('inf') else res[0]


# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

# BFS
class Solution(object):
    def findSecondMinimumValue(self, root):
        S = {root, None}
        Q = [root]
        target = float('inf')
        while Q:
            cur = Q.pop(0)
            if root.val < cur.val < target:
                target = cur.val
            left = cur.left
            right = cur.right
            if left not in S:
                Q.append(left)
                S.add(left)
            if right not in S:
                Q.append(right)
                S.add(right)
        return target if target < float('inf') else -1
