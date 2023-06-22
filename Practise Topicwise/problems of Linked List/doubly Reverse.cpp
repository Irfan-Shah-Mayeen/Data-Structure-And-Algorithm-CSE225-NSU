#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* prev;
Node* next;

Node(int data){
this->data = data;
this->prev = NULL;
this->next = NULL;
}

};

void InsertAtHead(Node* &head,int data){
Node* node1 = new Node(data);
Node* temp = head;
node1->next = temp;
temp->prev=node1;
head= node1;

}

void displayFromFirst(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

void Reverse(Node* &head){
Node* curr = head;
Node* forward=NULL;
Node* previous=NULL;
while(curr!=NULL){
    forward= curr->next;
    curr->next= previous;
    curr->prev=forward;
    previous = curr;
    curr=forward;


}
head= previous;


}


void displayReverse(Node* &head){
Node* temp = head;
while(temp->next!=NULL){
    temp=temp->next;
}
while(temp!=NULL){

    cout<<temp->data<<"->";
    temp = temp->prev;
}
cout<<"NULL"<<endl;

}


int main(){
Node* node = new Node(15);
Node* head = node ;
InsertAtHead(head,10);
InsertAtHead(head,5);
cout<<"After inserting 5,10,15 first to last:"<<endl;
displayFromFirst(head);
cout<<"After inserting 5,10,15 last to first:"<<endl;
displayReverse(head);

Reverse(head);
cout<<"after reverse operation ,first to last:"<<endl;
displayFromFirst(head);
cout<<"after reverse operation ,last to first :"<<endl;
displayReverse(head);


}
