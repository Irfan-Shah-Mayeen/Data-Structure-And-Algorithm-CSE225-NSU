#include "StackType.h"
template <class ItemType>
StackType<ItemType>::StackType(){
top=-1;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty(){
return (top==-1);
}

template <class ItemType>
bool StackType<ItemType>::IsFull(){

return (top==MAX_ITEMS-1);
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if( IsFull() ) throw FullStack();
    top++;
    items[top] = newItem;
}

template <class ItemType>
void StackType<ItemType>::Pop()
{
    if( IsEmpty() ) throw EmptyStack();
    top--;
}

template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty()) throw EmptyStack();
    return items[top];
}

//to check bracket balance



template<class ItemType>
bool StackType<ItemType>::isBalanace(string s){

StackType<char>br;
bool flag = true;

for(int i=0;i<s.size();i++){

    if(s[i]=='(')
        br.Push(s[i]);
    else{
        if(s[i]==')')
            if(br.IsEmpty() || br.Top()!='(')
        {
            flag=false;
            break;

        }
        else
            br.Pop();
    }
}
if(br.IsEmpty() && flag)
    flag=true;
else
    flag= false;
return flag;

}



