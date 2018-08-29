"""
# Definition for a Node.
class Node(object):
    def __init__(self, val, children):
        self.val = val
        self.children = children
"""
class Solution(object):
    def preorder(self, root):
        ret = []
        q = [root]
        if not root:
            return []
        while q:
            node = q.pop()
            ret.append(node.val)
            for child in node.children[::-1]:
                if child:
                    q.append(child)
        return ret