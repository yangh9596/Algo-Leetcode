# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# two pointers
class Solution(object):
    
    def hasCycle(self, head):
        """
            :type head: ListNode
            :rtype: bool
            """
        slow = fast = head
        while( fast ):
            fast = fast.next
            if not fast:
                return False
            slow = slow.next
            fast = fast.next
            if slow == fast:
                return True
        return False
