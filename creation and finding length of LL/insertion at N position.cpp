#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default constructor
    Node()
    {
        data = 0;
        next = nullptr;
    }

    // Parameterized constructor
    Node(int d)
    {
        data = d;
        next = nullptr;
    }

    // Destructor
    ~Node()
    {
        // No dynamic memory to free in this case
    }
};

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

void insertionAtNpostion(Node *&head, int position, int data)
{
    Node *newNode = new Node(data);
    Node *prev = NULL;
    Node *cur = head;
    while (position != 1)
    {
        prev = cur;
        cur = cur->next;
        position--;
    }
    prev->next = newNode;
    newNode->next = cur;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    newNode->next = NULL;

    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int getLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

int main()
{
    Node *first = new Node(2);
    Node *second = new Node(21);
    Node *third = new Node(24);
    Node *fourth = new Node(62);
    Node *fifth = new Node(98);

    // Example of linking nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    Node *tail = fifth;
    // Print linked list
    Node *current = first;
    printLL(current);
    int pos = 3;
    int len = getLength(current);

    if (pos == 1)
    {
        insertAtHead(current, 500);
    }
    if (pos > len)
    {
        insertAtTail(current, tail, 500);
    }
    if (pos > 1 && pos < len)
    {
        insertionAtNpostion(current, pos, 500);
    }
    cout << endl;
    printLL(current);

    return 0;
}
