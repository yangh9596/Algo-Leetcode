"""
# Definition for a Node.
class Node(object):
    def __init__(self, val, children):
        self.val = val
        self.children = children
"""


class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Node
        :rtype: List[List[int]]
        """
        # BFS
        if not root:
            return []
        Q = [root]
        Level = {root: 0}
        S = set([root])
        ret = []
        prev = 0
        while Q:
            cur = Q.pop(0)
            if Level[cur] == prev and ret:
                ret[-1].append(cur.val)
            else:
                ret.append([cur.val])
                prev += 1
            Q.extend(cur.children)
            for child in cur.children:
                Level[child] = prev + 1
        return ret

