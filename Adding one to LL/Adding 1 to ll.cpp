#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

node* reverse(node* &head) {
    node* prev = NULL;
    node* curr = head;
    node* next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node* addOne(node* &head) {
    // Reverse the list
    head = reverse(head);

    int carry = 1;
    node* temp = head;

    while (temp != NULL) {
        int total = temp->data + carry;
        temp->data = total % 10;
        carry = total / 10;
        
        if (carry == 0) break;
        
        if (temp->next == NULL) {
            temp->next = new node(0);
        }
        temp = temp->next;
    }

    head = reverse(head);

    return head;
}

int main() {
    node* head = new node(9);
    head->next = new node(9);
    head->next->next = new node(9);

    cout << "Original list: ";
    print(head);

    head = addOne(head);

    cout << "List after adding one: ";
    print(head);

    return 0;
}
