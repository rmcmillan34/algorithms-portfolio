/** LC-445
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
        // Build Stacks s1,s2 from l1,l2.
        std::vector<int> s1, s2;

        while (l1) { s1.push_back(l1->val); l1 = l1->next; }
        while (l2) { s2.push_back(l2->val); l2 = l2->next; }

        // Perform arithmetic on stack values
        int carry = 0;
        ListNode* head = nullptr;

        while ( !s1.empty() || !s2.empty() || carry ){
            int x = 0, y = 0;
            if ( !s1.empty() ) { x = s1.back(); s1.pop_back(); }
            if ( !s2.empty() ) { y = s2.back(); s2.pop_back(); }
            
            int total = x + y + carry;
            int digit = total % 10;
            carry = total / 10;

            // Prepend to build the result in forward order (since we pop from the back).
            ListNode* node = new ListNode(digit);
            node->next = head;
            head = node;
        }
        
        return head;
    }
}; 
