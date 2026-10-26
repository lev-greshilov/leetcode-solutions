/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> visited;

        ListNode* currentNode = head;

        while (currentNode != nullptr) {
            if (visited.count(currentNode)) {
                return true;
            }
            
            visited.insert(currentNode);
            currentNode = currentNode->next;
        }

        return false;
    }
};