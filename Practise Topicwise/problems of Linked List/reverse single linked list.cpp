#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    Node()
    {
        this->data=0;
        this->next=NULL;
    }
};

void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {

        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void InsertAtHead(int data,Node* &head)
{
    Node* temp = head;
    Node* node1 = new Node(data);
    node1->next = head ;
    head = node1;
}

Node* ReverseList(Node* &head)
{
    Node* prevNode;
    Node* currentNode;
    Node* nextNode ;

    prevNode=NULL;
    currentNode = nextNode = head;
    while(nextNode!=NULL)
    {
        nextNode=nextNode->next;
        currentNode->next = prevNode;
        prevNode =currentNode;
        currentNode=nextNode;
    }
    head = prevNode;
    return head; 4816


}



int main()
{
    Node* node1 = new Node(30);
    Node* head = node1;
    print(head);
    InsertAtHead(25,head);
    InsertAtHead(20,head);
    InsertAtHead(15,head);
    InsertAtHead(10,head);
    InsertAtHead(5,head);
    print(head);
    ReverseList(head);
    print(head);


}
