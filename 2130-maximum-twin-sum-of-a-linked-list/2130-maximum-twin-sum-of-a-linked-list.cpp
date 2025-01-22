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
    int pairSum(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int max_sum =0;
        int n = arr.size();
        for(int i =0 ; i<n/2;i++){
            int sum = arr[i] + arr[n-1-i];
            max_sum = max(max_sum,sum);
        }

        return max_sum;
    }
};