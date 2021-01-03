//linked list implementation
#include<iostream>
using namespace std;

class Node{
        public:
           int data;
           Node* next;

           Node(int val){
               data = val;
               next = NULL;
           }
};

void insertAtTail(Node* &head,int val){
    
    Node* n = new Node(val);
    if(head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertAtHead(Node* &head,int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

bool search(Node* head,int key){
    Node* temp=head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){

    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,6);
    display(head);
    cout<<search(head,10)<<endl;
    return 0;
}