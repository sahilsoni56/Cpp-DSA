
class Solution {
public:

    ListNode* deletee(ListNode* &head ,ListNode* &middle) {
        if (head == middle) {  // If the middle node is the head
            return head->next;
        }
        
        ListNode* prev = head;
        // Find the node just before the middle node
        while (prev->next != middle) {
            prev = prev->next;
        }
        
        prev->next = middle->next;  // Delete the middle node
        return head;
    
    }
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow= slow->next;
            }
        }
        return deletee(head ,slow);
    }
};