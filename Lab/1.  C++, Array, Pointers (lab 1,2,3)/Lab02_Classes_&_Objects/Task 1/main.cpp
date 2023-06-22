/*
Author:
Irfan Shah Mayeen
facebook: www.facebook.com/irfanshahmayeen
E-mail : irfan52660@gmail.com
*/
#include "dynarr.h"
#include <iostream>

using namespace std;

int main()
{
    DynArr ob1;
    DynArr ob2(5);
    ob2.SetValue(0,10);
    ob2.SetValue(1,20);
    ob2.SetValue(2,30);
    ob2.SetValue(3,40);
    ob2.SetValue(4,50);

    cout<<ob2.GetValue(0)<<" ";
    cout<<ob2.GetValue(1)<<" ";
    cout<<ob2.GetValue(2)<<" ";
    cout<<ob2.GetValue(3)<<" ";
    cout<<ob2.GetValue(4)<<" ";

    ob1.~DynArr();
    ob2.~DynArr();

    return 0;
}


/*Or

int main()
{
    DynArr ob1;

    DynArr ob2(5); // dyn(5) means we create a object of dynArr and pass a int parameter to the constructor

    int val;
    cout << "Enter 5 number: ";
    for(int i=0; i<5; i++){
            cin >> val;
        ob2.SetValue(i,val);
    }

    cout << "numbes: ";
    for(int i=0; i<5; i++){
        cout << ob2.GetValue(i) << " ";
    }

    ob1.~DynArr();
    ob2.~DynArr();
}


*/



