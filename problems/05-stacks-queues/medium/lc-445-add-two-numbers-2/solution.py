# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        # Initialise output LinkedList, and carryover integer
        current = ListNode(0)
        dummy = current
        carry = 0

        # Traverse both lists while digits or carry remain
        while(l1 or l2 or carry):
            x = l1.val if l1 else 0
            y = l2.val if l2 else 0
            
            total = x + y + carry
            digit = total % 10
            carry = total // 10

            # Append current result digit and advance
            current.next = ListNode(digit)
            current = current.next

            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None

        return dummy.next
