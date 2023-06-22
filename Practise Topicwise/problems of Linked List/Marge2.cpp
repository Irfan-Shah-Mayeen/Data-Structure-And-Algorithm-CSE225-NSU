#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};

void InsertAtFirst(Node* &head,int data)
{
    Node* temp = new Node(data);
    temp->next=head;
    head=temp;
}

void InsertAtLast(Node* &head,int data)
{
    Node* node1 = new Node(data);
    Node* temp =head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=node1;

}

void display(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;

}

void InsertAtAnyPosition(Node* &head,int position,int data)
{

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

void delationFirst(Node* &head)
{
    Node* temp = head;
    temp=temp->next;
    head=temp;
//delete temp;
}
void delationAnyPosition(Node* &head,int position)
{
    Node* temp=head;
    int cnt=1;
    while(cnt!=position-1)
    {

        temp=temp->next;
        cnt++;
    }
    temp->next=temp->next->next;


}

void Marge(Node* &head1,Node* &head2)
{

    if(head1==NULL)
    {
        head1=head1;
        return ;
    }

    if(head2==NULL)
    {
        head2=head1;
        return ;
    }

    Node* temp1 =head1;
    Node* temp2= head2;
    Node* prev =head1;
    Node* post =prev->next;
    while(post!=NULL && temp2!=NULL)
    {

        if(prev->data <= temp2->data <=post->data)
        {
            Node* setNode = new Node(temp2->data);
            setNode->next=post;
            prev->next=setNode;
            prev = prev->next;
            temp2=temp2->next;
            //post =prev->next;


        }
        else
        {
            //temp1=temp1->next;
            prev=prev->next;
            post=prev->next;
        }



    }








}




int main()
{
    Node* node1 = new Node(100);
    Node* head1 =node1;
    InsertAtFirst(head1,90);
    InsertAtFirst(head1,70);
    InsertAtFirst(head1,50);
    InsertAtFirst(head1,10);
    display(head1);


    Node* node2 = new Node(80);
    Node* head2 =node2;
    InsertAtFirst(head2,60);
    InsertAtFirst(head2,40);
    InsertAtFirst(head2,30);
    InsertAtFirst(head2,20);
    display(head2);

    Marge(head1,head2);
    display(head1);



}
