/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Create two ListNode pointers to track the results beginning and current address.
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        // Initialise our carry variable to 0
        int carry = 0;

        // Iterate while we have a non null pointer in L1 or L2 or a carry digit
        while (l1 || l2 || carry) {
            // If Ls contain value use that, otherewise 0
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;

            // Perform calculation for result digit and carry
            int total = x + y + carry;
            carry = total / 10;
            int digit = total % 10;

            // Create memory for a new result node, and point to that node
            current->next = new ListNode(digit);
            current = current->next;

            // Traverse the linked lists if there is a valid node
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;

        }

        return dummy->next;

    }
};
