#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"
#include<string>

using namespace std;

int main()
{
    //1.create a stack of integer
        StackType<int>st;

    //2.check for empty
    if(st.IsEmpty())
            cout<<"Stack Is Empty"<<endl;
    else
           cout<<"Stack is not Empty"<<endl;

    //3.Push 4 element;
    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(8);

    //4.check for empty
    if(st.IsEmpty())
            cout<<"Stack Is Empty"<<endl;
    else
           cout<<"Stack is not Empty"<<endl;

    //5.check for Full
    if(st.IsFull())
            cout<<"Stack Is FUll"<<endl;
    else
           cout<<"Stack is not FUll"<<endl;

     //6. print all the values in the stack (in order the values are given as input)

     StackType<int> st2;

    while(!st.IsEmpty()){
        st2.Push(st.Top());
        st.Pop();
    }

     while(!st2.IsEmpty()){

        cout<<st2.Top()<<" ";
        st.Push(st2.Top());
        st2.Pop();
     }
     cout<<endl;

     //7.push another item
     st.Push(3);

    //8. print all the values in the stack (in order the values are given as input)



     while(!st.IsEmpty()){
        st2.Push(st.Top());
        st.Pop();
     }
     cout<<endl;

     while(!st2.IsEmpty()){

        cout<<st2.Top()<<" ";
        st.Push(st2.Top());
        st2.Pop();
     }
     cout<<endl;

     //9.check for Full
    if(st.IsFull())
            cout<<"Stack Is FUll"<<endl;
    else
           cout<<"Stack is not FUll"<<endl;

       //10. pop 2 item
       st.Pop();
       st.Pop();
       //10.print top value

       cout<<st.Top()<<endl;


     //TASK 2
     StackType<char>char_stack;
     string s;
     cin>>s;
     if(char_stack.isBalanace(s))
        cout<<"Balanced"<<endl;
     else
        cout<<"Not Balanced"<<endl;







}
