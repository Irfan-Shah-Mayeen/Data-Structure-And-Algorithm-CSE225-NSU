#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value)
    {
        this->data= value;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
    int val = this ->data;
     if(next!= NULL){
        delete next;
        next = NULL;
     }
     cout<<"memory free for node with data "<<val<<endl;
    }
};



//printing
void print(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

// length
int getLength(Node* head)
{
    int len=0;
    Node* temp = head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;

}


//insert at head
void InsertAtHead(Node* &head,int value)
{
    Node* temp = new Node(value);
    temp->next=head;
    head->prev= temp;
    head= temp;


}

//insert at tail
void InsertAtTail(Node* &tail,int value)
{
    Node* temp= new Node(value);
    tail->next = temp;
    temp->prev = tail;
    tail= temp;

}

//insert at any position
void InsertAtPosition(Node* &head,Node* &tail,int position,int value)
{
    if(position ==1)
    {
        InsertAtHead(head,value);
        return ;
    }

    Node* temp = head ;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }

    //insert last pos
    if(temp->next == NULL)
    {
        InsertAtTail(tail,value);
        return ;
    }

    //creating node for value
    Node* node1 = new Node(value);
    node1 -> next = temp->next;
    temp->next->prev=node1;
    temp->next= node1;
    node1->prev = temp;


}


void deleteFirstNode(Node* &head,int position){
Node* temp = head;
temp->next->prev = NULL;
head= temp->next;
temp->next= NULL;
delete temp;

}

//deleteting node

void deleteNode(Node* &head , int position){

 if(position==1) //delete 1st node
 {
     deleteFirstNode(head,position);


 }


 else{       //delete any middle node or last node

        Node* current = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){

            prev = current;
            current = current->next;
            cnt++;
        }
        current->prev = NULL;
        prev->next = current ->next;
        current->next = NULL;

       delete current;

 }



}



void in(Node* &head,int position , int value){
Node* node1 = new Node(value);
Node* temp = head;
int cnt =1;
while(cnt<position-1){
    temp=temp->next;
     cnt++;
}
node1->prev = temp;
node1 ->next = temp->next;
temp->next = node1;
temp->next->prev = node1;


}

del(Node* &head , int position){
  Node* temp = head;
  int cnt =1;
  while(cnt<position-1){
    temp=temp->next;
    cnt++;

  }

  temp->next=temp->next->next;
  temp->next->next->prev =temp;




}






int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout<<"Length is : "<<getLength(head)<<endl;
    InsertAtHead(head,5);
    print(head);
    InsertAtTail(tail,15);
    print(head);

    InsertAtPosition(head,tail,1,4);  // insert at 1st pos
    print(head);
    InsertAtPosition(head,tail,5,4);   //insert at last
    print(head);
    InsertAtPosition(head,tail,getLength(head)+1,5);   //insert at last
    print(head);
    InsertAtPosition(head,tail,3,50);   //insert at 3 no pos
    print(head);
    deleteNode(head,2);
    print(head);
    deleteNode(head,1);
    print(head);
    deleteNode(head,getLength(head));
    print(head);
     in(head,2,9);
    print(head);
    cout<<"del"<<endl;
   del(head,3);
    print(head);


}









