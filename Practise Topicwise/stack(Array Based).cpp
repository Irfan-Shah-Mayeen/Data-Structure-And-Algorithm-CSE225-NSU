#include<iostream>
using namespace std;
class Stack{
//properties
public:
    int *arr;
    int top;
    int size;

//behaviour
Stack(int size){
this->size=size;
arr= new int[size];
top=-1;

}


void push(int element){
 if(size-top>1){  //cheak space available
    top++;
    arr[top]=element;
 }
 else{

    cout<<"Stack Overflow"<<endl;
 }

}


void pop(){
if(top==-1) //check is empty or not
    cout<<"Stack UnderFlow"<<endl;
else{
     arr[top]=NULL;
     top--;
}

}

int peek(){
if(top==-1){
    cout<<"Stack is empty"<<endl;
    return -1;
}
else{
    return arr[top];
}
}

bool isEmpty(){
if(top==-1)
    return true;
else
    return false;
}
};


int main(){

Stack st(5);
st.push(22);
st.push(43);
st.push(45);
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
if(st.isEmpty())
    cout<<"Stack is Empty" <<endl;
else
   cout<<"Stack is not EMpty"<<endl;


st.pop();
st.pop();
if(st.isEmpty())
    cout<<"Stack is Empty" <<endl;
else
   cout<<"Stack is not EMpty"<<endl;

}
