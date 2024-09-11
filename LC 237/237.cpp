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
    void deleteNode(ListNode* node) {
         if (node == nullptr || node->next == nullptr) {
            return;
        }
        ListNode* temp = node;
        ListNode* nextele = node->next;

       temp->val = nextele->val;
       temp->next = nextele->next;
        delete nextele;
        
    }
};