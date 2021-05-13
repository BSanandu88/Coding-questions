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

void makeCycle(Node* &head,int pos){
    Node* temp = head;
    Node* startNode;
    int count = 1;
    while(temp->next != NULL){
        if(count == pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }

    temp->next = startNode;
}
bool detectCycle(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL and fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){
            return true;
        }
    }
return false;

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
    insertAtHead(head,6);
    makeCycle(head,3);
    //display(head);
    cout<<detectCycle(head)<<"\n";
    
    return 0;
}