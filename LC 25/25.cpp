class Solution {
public:
    int getLength(ListNode* head) {
        ListNode* temp = head;
        int len = 0;
        while (temp != nullptr) {
            len++;
            temp = temp->next;
        }
        return len;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1) {
            return head;
        }

        int len = getLength(head);
        if (len < k) return head;  // Not enough nodes to reverse

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* nextNode = nullptr;
        int pos = 0;

        // Reverse the first k nodes
        while (pos < k && curr != nullptr) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            pos++;
        }

        // head is now the end of the reversed segment
        // nextNode is the start of the remaining list
        if (nextNode != nullptr) {
            head->next = reverseKGroup(nextNode, k);
        }

        return prev;  // prev is the new head after reversal
    }
};
