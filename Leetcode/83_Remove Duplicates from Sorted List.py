# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        front = back = head
        while front and front.next:
            front = front.next
            if front.val == back.val:
                back.next = front.next
                front = back
                continue
            back = back.next
        return head