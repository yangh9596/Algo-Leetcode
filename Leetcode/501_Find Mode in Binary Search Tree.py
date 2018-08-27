# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):

    def findMode(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """

        if not root:
            return mode

        def ModeCount(root, mode, prev, count, maxcount):
            if not root:
                return (mode, prev, count, maxcount)
            mode, prev, count, maxcount = ModeCount(root.left, mode, prev, count, maxcount)
            if not prev:
                if prev == root.val:
                    count += 1
                else:
                    count = 1
            if count > maxcount:
                maxcount = count
                mode = []
                mode.append(root.val)
            elif count == maxcount:
                mode.append(root.val)
            prev = root.val
            mode, prev, count, maxcount = ModeCount(root.right, mode, prev, count, maxcount)
            return (mode, prev, count, maxcount)

        mode, _, _, _ = ModeCount(root, [], None, 0, 0)
        return mode