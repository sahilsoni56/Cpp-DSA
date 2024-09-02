#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node(){
        data = 0;
        next = nullptr;
    } 

    // Parameterized constructor
    Node(int d){
        data = d;
        next = nullptr;
    } 

    // Destructor
    ~Node() {
        // No dynamic memory to free in this case
    }
};

int main() {
    Node* first = new Node(2);
    Node* second = new Node(21);
    Node* third = new Node(24);
    Node* fourth = new Node(62);
    Node* fifth = new Node(98);

    // Example of linking nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Print linked list
    int len = 0;
    Node* current = first;
    while (current != nullptr) {
        len++;
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    cout << "Length of the linked list: " << len << endl;

  

    return 0;
}
