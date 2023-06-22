#include "dynarr.h"
#include "dynarr.cpp"
#include <iostream>

using namespace std;

int main()
{

   DynArr<int> obj1();   //ob1 create without parameter;
   int s;
   cout<<"Enter size :";
   cin>>s;              //taking a size of Array for ob2
   DynArr<int> obj2(s);   //ob2 create with parameter of size

   for(int i=0;i<8;i++)
   {
        int value;
       cout<<"Enter your input";
       cin>>value;
       obj2.SetValue(i,value);
   }
    for(int i=0;i<8;i++)
    {
        cout<<obj2.GetValue(i)<<" ";
    }
    cout<<endl;
    obj2.~DynArr();   //deallocation
}
