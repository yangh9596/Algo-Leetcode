# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        n = root = ListNode(0)
        addone = 0
        while l1 or l2 or addone:
            v1 = v2 = 0
            if l1:
                v1 = l1.val
                l1 = l1.next
            if l2:
                v2 = l2.val
                l2 = l2.next
            val = (v1 + v2 + addone) % 10
            addone = (v1 + v2 + addone >= 10)
            n.next = ListNode(val)
            n = n.next
        return root.next

