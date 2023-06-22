#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
#include<string>
using namespace std;

const int MAX_ITEMS =5;

class FullStack
{

};
class EmptyStack{

};

template <class ItemType>
class StackType{
public:
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool isBalanace(string);
private:
    int top;
    ItemType items[MAX_ITEMS];

};



#endif // STACKTYPE_H_INCLUDED
