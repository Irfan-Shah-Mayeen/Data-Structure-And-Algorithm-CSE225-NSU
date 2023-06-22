#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

//constructor
Node(int value){

this->data=value;
this->prev=NULL;
this->next=NULL;
}


};

//print the list
void display(Node* head){
Node* temp= head;
while(temp!=NULL){
    cout<<temp->data<<"-->";
    temp=temp->next;
}
cout<<"NULL"<<endl;

}

//gives the length
int getLength(Node* head){
int len=0;
Node* temp= head;
while(temp!=NULL){
    len++;
    temp=temp->next;

}
return len;
}

//insert at first /head
void InsertAtHead(Node* &head,int value){
Node* temp= new Node(value);
temp->next=head;
temp->prev=temp;
head=temp;
}

//insert at last/tail

void InsertAtTail(Node* &tail, int value){
     Node* temp = new Node(value);
     tail->next=temp;
     temp->prev=tail;
     tail=temp;


}

// insert at middle position

void InsertAtPosition(Node* &head,Node* &tail, int position,int value){

//insert first
if(position==1)
{
    InsertAtHead(head,value);
    return;
}

Node* temp = head;
int cnt=1;
while(cnt<position-1){

    temp=temp->next;
    cnt++;
}

//insert last
if(temp->next==NULL){


    InsertAtTail(tail,value);
    return;
}

Node* nodeToInsert = new Node(value);
nodeToInsert->next= temp->next;
temp->next->prev=nodeToInsert;
temp->next = nodeToInsert;
nodeToInsert->prev =temp;


}


int main(){
Node* node1 = new Node(10);
Node* head = node1;
Node* tail = node1;
display(head);
int length = getLength(head);
cout<<"Length is :"<<length<<endl;
InsertAtHead(head,20);
display(head);
InsertAtTail(tail,13);
display(head);
cout<<"Length is :"<<getLength(head)<<endl;

InsertAtPosition(head,tail,2,100);
display(head);

InsertAtPosition(head,tail,1,101);
display(head);
cout<<"Length is :"<<getLength(head)<<endl;
InsertAtPosition(head,tail,6,102);
display(head);




}
