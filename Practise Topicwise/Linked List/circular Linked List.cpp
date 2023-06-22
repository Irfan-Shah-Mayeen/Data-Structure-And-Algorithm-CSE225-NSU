#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
Node(int value){

this->data=value;
this->nex=NULL:
}

~Node(){
int value = this->data;
if(this->next!=NULL){

    delete next;
    next=NULL:
}
cout<<"memory is free for node with data :"<<value<<endl;

}

};

void InsertAtHead(Node* &head,int value){
Node node1 = new Node(value);
if(head==NULL){

    node1->next=node1;
    head = node1;
    return ;
}
Node* temp = head;
while(temp->next!=head){
    temp=temp->next;
}

}

void InsertAtTail(Node* &head,int value){
    if(head==NULL){
        InsertAtHead(head,value);
        return;
    }
Node* node1 = new Node(value);
Node* temp = head;
while(temp->next!=head){
    temp=temp->next;
}
temp->next =node1;
node1->next=head;


}


int main(){


}
