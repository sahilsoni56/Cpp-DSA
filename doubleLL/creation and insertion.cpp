#include <iostream>

using namespace std;

class node {
public:
    int data;
    node* prev;
    node* next;

    node(int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

void printLL(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) {
            cout << " <-> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

int length(node* head) {
    int count = 0;
    node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAThead(node*& head, node*& tail, int data) {
    node* newNode = new node(data);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->prev = head;
    head->next->next = new node(3);
    head->next->next->prev = head->next;
    head->next->next->next = new node(4);
    head->next->next->next->prev = head->next->next;
    head->next->next->next->next = new node(5);
    head->next->next->next->next->prev = head->next->next->next;
    node* tail = head->next->next->next->next;

    cout << "Original list: ";
    printLL(head);

    insertAThead(head, tail, 10);

    cout << "List after inserting at the head: "<<endl;
    printLL(head);

    return 0;
}
