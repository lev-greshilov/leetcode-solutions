# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        # Start with None, before the real head
        res = ListNode()
        current = res

        while list1 and list2:
            if list1.val < list2.val:
                current.next = list1
                list1 = list1.next
            else:
                current.next = list2 
                list2 = list2.next
            current = current.next 

        # Add the remaining sorted tail
        current.next = list1 if list1 else list2
        # Delete first None value
        res = res.next
        
        return res