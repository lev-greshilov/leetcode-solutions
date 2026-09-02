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

#include <numeric>

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* currentNode = head;
        ListNode* nextNode = currentNode->next;

        while (nextNode != nullptr) {
            int a = currentNode->val;
            int b = nextNode->val;

            // Directly insertion
            ListNode* insertion = new ListNode(std::gcd(a, b)); 
            insertion->next = nextNode; 
            currentNode->next = insertion;

            // Update checked node pair
            currentNode = nextNode;
            nextNode = currentNode->next;

        }
        return head;
    }
};