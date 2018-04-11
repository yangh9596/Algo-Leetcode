# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def mergeTwoLists(self, l1, l2):
        """
            :type l1: ListNode
            :type l2: ListNode
            :rtype: ListNode
            """
        
        def merge(L1, L2):
            if not L1:
                return L2
            if not L2:
                return L1
            if L1.val <= L2.val:
                L1.next = merge(L1.next, L2)
                return L1
            else:
                L2.next = merge(L1, L2.next)
                return L2
    
        return merge(l1, l2)

# iteratively
def mergeTwoLists1(self, l1, l2):
    dummy = cur = ListNode(0)
    while l1 and l2:
        if l1.val < l2.val:
            cur.next = l1
            l1 = l1.next
        else:
            cur.next = l2
            l2 = l2.next
        cur = cur.next
    cur.next = l1 or l2
    return dummy.next
