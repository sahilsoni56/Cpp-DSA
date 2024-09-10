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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            head = head->next;
        }
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp !=NULL){
             if (temp->val == val) {
                // Remove the current node by linking prev to temp->next.
                prev->next = temp->next;
            } else {
                // Move prev pointer forward only when we don't remove the node.
                prev = temp;
            }
            // Move temp pointer forward.
            temp = temp->next;
        }
        return head;
    }
};