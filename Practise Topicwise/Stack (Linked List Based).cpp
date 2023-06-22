#include<iostream>
using namespace std;
int len =0;
class Node{
public:
    int data;
    Node* next;

    Node(int data){
    this->data=data;
    this->next=NULL;
    len++;
    }


};

void push(Node* &top,int value){


Node* temp = new Node(value);
temp->next=top;
top=temp;
}

void pop(Node* &top){
    if(len==0)
    {
        cout<<"there is no element for pop"<<endl;
        return;
    }
Node* temp =top;
top=top->next;
temp->next =NULL;
len--;
delete temp;


}

void display(Node* &top){
    if(len==0)
    {
        cout<<"There is no element for display"<<endl;
    }
Node* temp = top;
while(temp!=NULL)
{
    cout<<temp->data<<endl;
    temp=temp -> next;
}
cout<<"NULL"<<endl;
}



int main(){
Node* ob = new Node(2);
Node* top = ob;
push(top,3);
push(top,4);
display(top);
pop(top);
cout<<"After POP"<<endl;
display(top);
pop(top);
cout<<"After POP"<<endl;
display(top);
pop(top);
cout<<"After POP"<<endl;
display(top);
pop(top);
cout<<"After POP"<<endl;
display(top);


}
