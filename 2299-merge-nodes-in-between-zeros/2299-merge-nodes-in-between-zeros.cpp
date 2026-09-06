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
    ListNode* mergeNodes(ListNode* head) {
        ListNode dummy;
        ListNode* current_write = &dummy; 
        ListNode* current_read = head->next; 

        int sum = 0;

        while (current_read != nullptr) {
            if (current_read->val == 0) {
                current_write->next = new ListNode(sum);
                current_write = current_write->next;
                sum = 0;
            } else {
                sum += current_read->val;
            }
            current_read = current_read->next;
        }
        return dummy.next;
    }
};
