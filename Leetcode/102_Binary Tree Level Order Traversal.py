# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        # BFS
        if not root:
            return []
        Q = [[root, 0]]
        S = set([root])
        ret = [[]]
        depth = 0
        while Q:
            cur, depth = Q.pop(0)
            if len(ret) < depth + 1:
                ret.append([])
            ret[depth].append(cur.val)
            left = cur.left
            right = cur.right

            if left not in S and left:
                Q.append([left, depth + 1])
                S.add(left)
            if right not in S and right:
                Q.append([right, depth + 1])
                S.add(right)
        return ret


def levelOrderBottom1(self, root):
    res = []
    self.dfs(root, 0, res)
    return res

def dfs(self, root, level, res):
    if root:
        if len(res) < level + 1:
            res.insert(0, [])
        res[-(level+1)].append(root.val)
        self.dfs(root.left, level+1, res)
        self.dfs(root.right, level+1, res)