#include<iostream>
using namespace std;

class Node
{
public :
    int data;
    Node* next;


    //constructor
    Node(int data)
    {
        this -> data=data;
        this -> next=NULL;

    }




    //Destructor
    ~Node()
    {
        int value = this-> data;
        //memory free
        if(this->next!= NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }



};

void display(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {

        cout<<temp->data<<"-->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;


}

void InsertAtHead(Node* &head, int value)
{
    Node* temp = new Node(value);
    temp->next=head;
    head=temp;

}


void InsertAtTail(Node* &head, int value)
{

    Node* temp= new Node(value);
    if(head==NULL)
    {
        head=temp;
    }

    Node* temp2 = head;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp;

}


void InsertAtPosition(Node* &head,int position, int value)
{

//when position 1 // insert At  Head
    if(position==1)
    {
        InsertAtHead(head,value);
        return;
    }

    Node* temp = head;

    int current_position =1;
    while(current_position < position -1)
    {
        temp=temp->next;
        current_position ++;

    }

// insert At tail
    if(temp->next==NULL)
    {

        InsertAtTail(head,value);
        return;
    }


    Node* temp1 = new Node(value);
    temp1->next=temp->next;
    temp->next=temp1;


}

bool Search(Node* &head, int value)
{

    Node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data==value)
            return true;
        temp = temp->next;

    }
    return false;

}



int  Lengths(Node* &head ){
Node* temp = head;
int cnt=0;;
while(temp!=NULL){
  cnt++;
  temp=temp->next;

}
return cnt;

}


//delete BY position number
void delation(Node* &head, int position)
{

    //delete first or start
    if(position==1)
    {
        Node* temp = head;
        head=head->next;
        head=temp;
        //memory free start ndone
        temp->next=NULL;
       delete temp;
    }

//    else if( Lengths(head)==position){
//
//        Node* temp = head;
//        int cnt=0;
//        while(position-2==cnt){
//
//            temp=temp->next;
//            cnt++;
//        }
//
//        temp->next=NULL;
//
//    }
    else
    {
        //delete any of middle
        Node* temp = head;
        int current_position=1;
        while(current_position <position-1)
        {

            temp=temp->next;
            current_position++;
        }
        Node* temp2 = temp;
        temp2=temp2->next;
        temp->next=temp2->next;

    }


}


void Length(Node* &head ){
Node* temp = head;
int cnt=0;;
while(temp!=NULL){
  cnt++;
  temp=temp->next;

}
cout<<"List Length is : "<<cnt<<endl;

}











int main()
{


    Node* node1 = new Node(10);
    Node* head = node1;
    display(head);
    InsertAtHead(head,20);
    display(head);
    InsertAtTail(head,30);
    display(head);
    if(Search(head,20))
        cout<<"20 FOUND"<<endl;
    else
        cout<<"20 Not FOund"<<endl;
    if(Search(head,5))
        cout<<"5 Found"<<endl;
    else
        cout<<"5 not Found"<<endl;


    InsertAtPosition(head,3,70);
    display(head);
    InsertAtPosition(head,1,80);
    display(head);
    InsertAtPosition(head,6,90);
    display(head);

    delation(head,3);    // delete from middle
    display(head);
   // delation(head,1);
    //display(head);
    Length(head);
   // delation(head,1);
   // display(head);
    delation(head,4);
    display(head);
    delation(head,4);
    display(head);







    return 0;

}



