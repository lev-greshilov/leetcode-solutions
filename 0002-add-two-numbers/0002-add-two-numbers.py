# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        result = ListNode(0) # The first node in the singly-linked list.
        current = result
        carry = 0 
        
        while l1 or l2 or carry:
            # Handle none values 
            val_1 = l1.val if l1 else 0
            val_2 = l2.val if l2 else 0
            # Digit-by-digit addition
            total = val_1 + val_2 + carry
            carry = total // 10
            out_digit = total % 10
            # Create a new node and switch to it
            current.next = ListNode(out_digit)
            current = current.next
            # Move the pointers forward
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
            
        return result.next
