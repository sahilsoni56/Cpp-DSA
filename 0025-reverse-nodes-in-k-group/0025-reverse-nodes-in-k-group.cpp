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

    // Helper function to calculate the length of the linked list
    int length(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            len++;
            temp = temp->next;
        }
        return len;
    }

    // Function to reverse nodes in groups of k
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Base case: if the list is empty or has a single node, return the head
        if (head == NULL || head->next == NULL) return head;

        // Check if there are enough nodes to reverse
        if (length(head) < k) return head;

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nextnode = NULL;
        int pos = 0;

        // Reverse the first k nodes
        while (pos < k && curr != NULL) {
            nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
            pos++;
        }

        // Recursively reverse the remaining nodes
        if (nextnode != NULL) {
            head->next = reverseKGroup(nextnode, k);
        }

        // Return the new head of the reversed list
        return prev;
    }
};
