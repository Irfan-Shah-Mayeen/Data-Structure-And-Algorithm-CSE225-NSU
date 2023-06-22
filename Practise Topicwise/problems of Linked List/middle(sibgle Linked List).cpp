#include<iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
Node(int data){
this->data=data;
this->next=NULL;
}

};

void InsertAtFirst(Node* &head,int data){
Node* temp = new Node(data);
temp->next=head;
head=temp;
}

void InsertAtLast(Node* &head,int data){
Node* node1 = new Node(data);
Node* temp =head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=node1;

}

void display(Node* &head){
   Node* temp = head;
   while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;

   }
   cout<<"NULL"<<endl;

}

void InsertAtAnyPosition(Node* &head,int position,int data){

if(position==1)
{
    InsertAtFirst(head,data);
    return;
}

Node* node1 = new Node(data);
int cnt =1;
Node* temp =head;
while(cnt!=position-1)
{
    temp=temp->next;
    cnt++;
}
node1->next=temp->next;
temp->next = node1;


}

void delationFirst(Node* &head){
Node* temp = head;
 temp=temp->next;
 head=temp;
 //delete temp;
}
void delationAnyPosition(Node* &head,int position){
Node* temp=head;
int cnt=1;
while(cnt!=position-1){

    temp=temp->next;
    cnt++;
}
temp->next=temp->next->next;


}
int  LengthIs(Node* &head){
Node* temp = head;
int len =0;
while(temp!=NULL){
    temp=temp->next;
    len++;
}
return len;

}

void FindMiddle(Node* &head){
 Node* temp = head;
int len = LengthIs(head);
int mid;
if(len%2==0)
 mid=len/2;
else
  mid= (len/2)+1;

int cnt=1;
while(cnt!=mid){
    temp=temp->next;
    cnt++;
}
cout<<temp->data;
if(len%2==0){
    cout<<" AND ";
    cout<<temp->next->data<<endl;
}
else
    cout<<endl;

}




 int main(){
 Node* node1 = new Node(5);
 Node* head =node1;

 InsertAtFirst(head,6);
 display(head);
 InsertAtLast(head,3);
 InsertAtLast(head,4);
 InsertAtLast(head,5);
 InsertAtLast(head,6);
 display(head);
 InsertAtAnyPosition(head,3,9);
 display(head);
 delationFirst(head);
 display(head);
 delationAnyPosition(head,3);
 display(head);
 cout<<"length is :"<<LengthIs(head)<<endl;
 cout<<"List is: ";
 display(head);
 cout<<"find mid for odd :"<<endl;
 FindMiddle(head);
 delationFirst(head);
 cout<<"after deleteing 1 node :"<<endl;
 cout<<"length is :"<<LengthIs(head)<<endl;
 cout<<"List is: ";
 display(head);

cout<<"Find mid for even :"<<endl;
 FindMiddle(head);




 }
