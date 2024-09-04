#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;

    public:
    node(int d){
        data = d;
        next = NULL;
    }
};

void printLL(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}


int length(node* head){
    int count = 0;
    node* temp = head;
    while(temp!= NULL){
        count++;
        temp = temp->next;
    }
    return count;
}


void deleteNode(node* &head,int pos){
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    int len = length(head);
    if(pos ==1){
        node* temp = head;
        head = temp->next;
        temp->next =NULL;
        delete temp;
    }
    if(pos == len){
        node*  temp2= head;
        while(temp2->next->next != NULL){
            temp2=temp2->next;
        }
        delete temp2->next;
        temp2->next = NULL;
    }
    if(pos >1 && pos < len){
        node*temp3 = head;
        while(pos !=1){
            temp3 = temp3->next;
            pos--;
        }

        node* temp4 = temp3->next;
        temp3->next = temp4->next;
        delete temp4;
        

    }
   
}

int main(){
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

    printLL(head);
    deleteNode(head,1);
    printLL(head);
    return 0;

}