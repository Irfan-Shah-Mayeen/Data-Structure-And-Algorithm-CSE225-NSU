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


void deleteDuplicate(Node* &head)
{
    if(head==NULL)
        return;

    Node* curr = head;;
    while(curr!=NULL)
    {
        if( (curr->next!=NULL) &&  curr->data == curr->next->data)
        {
            Node* temp = curr ->next;
            curr->next = curr->next->next;
            curr=curr->next;
            delete temp;

        }
        else
        {
            curr=curr->next;

        }
    }
}






void Sort(Node* &head)
{

    Node* ptr=head;
    Node* cnt= NULL;
    while(ptr->next!=NULL)
    {
        cnt=ptr->next;
        while(cnt!=NULL)
        {
            if(ptr->data > cnt->data)
            {
                int temp = ptr ->data;
                ptr->data = cnt->data;

                cnt->data = temp;


            }
            cnt=cnt->next;

        }
        ptr=ptr->next;


    }
}









int main()
{
    Node* node1 = new Node(10);
    Node* head =node1;

    InsertAtFirst(head,4);
    display(head);
    InsertAtLast(head,4);
    InsertAtLast(head,3);
    InsertAtLast(head,3);
    InsertAtLast(head,2);
    display(head);
    InsertAtAnyPosition(head,3,9);
    display(head);
    delationFirst(head);
    display(head);
    delationAnyPosition(head,3);
    InsertAtFirst(head,1);
    InsertAtFirst(head,1);

    display(head);
    deleteDuplicate(head);
    display(head);
    Sort(head);
    display(head);





}
