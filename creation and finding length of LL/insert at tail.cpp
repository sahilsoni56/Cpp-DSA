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


void  insertAtTail(Node* &head, Node* &tail,int data){
            Node* newNode = new Node(data);
                    newNode->next = NULL;


    if(head == NULL && tail == NULL){
        head = newNode;
        tail = newNode;

    }else{
        tail->next = newNode;
        tail = newNode;
    }

}

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

int main() {
    Node* first = new Node(2);
    Node* second = new Node(21);
    Node* third = new Node(24);
    Node* fourth = new Node(62);
    Node* fifth = new Node(98);
    Node* tail = fifth;
    // Example of linking nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Print linked list
    Node* current = first;
    printLL(current);
    cout<<endl;
    insertAtTail(current, tail,500);
   printLL(first);


  

    return 0;
}
