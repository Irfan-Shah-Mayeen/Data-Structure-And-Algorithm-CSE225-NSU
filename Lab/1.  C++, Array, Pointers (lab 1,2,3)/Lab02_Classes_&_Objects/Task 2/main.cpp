#include <iostream>
#include"dynarr.h"

using namespace std;

int main()
{
    DynArr ob(5);
    cout<<"Size: ";
    int size;
    cin>>size;
    ob.allocate(size);
    int value;
    for(int i=0;i<size;i++){
        cin>>value;
        ob.SetValue(i,value);
    }
     for(int i=0;i<size;i++){

       cout<<ob.GetValue(i)<<" ";
    }
    return 0;
}
