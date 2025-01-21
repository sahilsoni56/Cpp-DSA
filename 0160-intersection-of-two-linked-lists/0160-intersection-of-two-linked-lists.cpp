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
   int length(ListNode* head) {
        int n = 0;
        while (head != nullptr) {  
         n++;                  
            head = head->next;    
        }
        return n;  
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)    {
        int l1 = length(headA);
        int l2 = length(headB);

            if(l1>l2){
                int diff = l1-l2;
                while (diff > 0) {
                    headA = headA->next;
                    diff--;
                }
           
            }else{
                int diff = l2-l1;
                while (diff > 0) {
                    headB = headB->next;
                    diff--;
                }
            }

            while(headA != nullptr && headB != nullptr){
                 if (headA == headB) {
                return headA;  // Intersection found
            }
            headA = headA->next;
            headB = headB->next;
            }
            return nullptr;
    }
};