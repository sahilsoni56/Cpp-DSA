class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        if (head == nullptr || head->next == nullptr) return;

        Node* slow = head;
        Node* fast = head;

        // Step 1: Detect loop using Floyd's cycle detection algorithm.
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            // If slow and fast meet, a loop is detected.
            if (slow == fast) {
                break;
            }
        }

        // If no loop is found, just return.
        if (fast == nullptr || fast->next == nullptr) {
            return;
        }

        // Step 2: Find the start of the loop.
        slow = head;
        if (slow == fast) {
            // Special case when the loop starts at the head
            while (fast->next != slow) {
                fast = fast->next;
            }
        } else {
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
        }

        // Step 3: Break the loop.
        fast->next = nullptr;
    }
};
