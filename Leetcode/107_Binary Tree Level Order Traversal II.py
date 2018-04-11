# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

# use BFS
class Solution:
    def levelOrderBottom(self, root):
        
        S = set()
        S.add(root)
        Q = [[root, 0]]
        ret = []
        
        if not root:
            return []
        while Q:
            cur, depth = Q.pop(0)
            if len(ret) < depth+1:
                ret.append([])
            ret[depth].append(cur.val)
            if cur.left not in S and cur.left:
                S.add(cur.left)
                Q.append([cur.left, depth+1])
            if cur.right not in S and cur.right:
                S.add(cur.right)
                Q.append([cur.right, depth+1])
        ret.reverse()
        return ret


# dfs recursively
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

# dfs + stack
def levelOrderBottom2(self, root):
    stack = [(root, 0)]
    res = []
    while stack:
        node, level = stack.pop()
        if node:
            if len(res) < level+1:
                res.insert(0, [])
            res[-(level+1)].append(node.val)
            stack.append((node.right, level+1))
            stack.append((node.left, level+1))
    return res

# bfs + queue
def levelOrderBottom(self, root):
    queue, res = collections.deque([(root, 0)]), []
    while queue:
        node, level = queue.popleft()
        if node:
            if len(res) < level+1:
                res.insert(0, [])
            res[-(level+1)].append(node.val)
            queue.append((node.left, level+1))
            queue.append((node.right, level+1))
    return res
