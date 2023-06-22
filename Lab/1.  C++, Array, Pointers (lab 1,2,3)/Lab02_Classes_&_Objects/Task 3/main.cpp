#include <iostream>
#include"dynarr.h"
using namespace std;

int main()
{
    int row;
    cout<<"Row:";
    cin>>row;    // taking no of row from user

   DynArr ob(row);    //call parameterized constructor wit row;


cout<<"Enter Values : "<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<ob.temp[i];j++){
          int value;     // taking value of Array
          cin>>value;
        ob.SetValue(i,j,value);  //call inserting function
        }

    }

    cout<<"Print:"<<endl;
     for(int i=0;i<row;i++){
        for(int j=0;j<ob.temp[i];j++){
          cout<<ob.GetValue(i,j)<<" ";   // call print function for print
        }
        cout<<endl;
    }

    ob.~DynArr();   //call destructor for delete/ deallocation of dynamic memory


    return 0;
}
