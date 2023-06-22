#include<iostream>
#include<stack>
using namespace std;

int main(){
//creation of stack
stack<int>s;

//push
s.push(2);
s.push(3);
s.pop();
cout<<"printing top element : "<<s.top()<<endl;
if(s.empty())
    cout<<"stack is empty"<<endl;
else
    cout<<"stack is not empty"<<endl;

cout<<"size is : "<<s.size()<<endl;
s.pop();
if(s.empty())
    cout<<"stack is empty"<<endl;
else
    cout<<"stack is not empty"<<endl;


}
