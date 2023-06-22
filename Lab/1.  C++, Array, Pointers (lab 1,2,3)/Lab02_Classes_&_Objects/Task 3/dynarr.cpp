/*
Author:
Irfan Shah Mayeen
facebook: www.facebook.com/irfanshahmayeen
E-mail : irfan52660@gmail.com
*/
#include"dynarr.h"
#include<iostream>
using namespace std;

DynArr::DynArr()
{
 data = NULL;
 row = 0;
}

DynArr::~DynArr(){      //destructor
    for(int i=0;i<row;i++){
        delete []data[i];   // delete every coloum  from heep

    }
delete []data;   //delete every row / full arryay from heep
delete temp;     // delete temp (1D temporary Array)
}

DynArr::DynArr(int r){    //   contructor with parameter of Row
data = new int*[r];       // create 2D Array Dynamically
temp = new int[r];        //create 1D Array Dynamically

for(int i=0;i<r;i++){
      cout<<"For "<<i<<" Row's col :"<<endl;
        int c;
        cin>>c;   // taking colum no individually
    data[i]=new int[c];  // crate 1D array of every row
    temp[i]=c;          //store coloum no at emporary variable(1D Array)
}
row=r;    //store no of row
}

void DynArr::SetValue(int r, int c ,int value){    //inserting value to Array
data[r][c]=value;

}

int DynArr::GetValue(int r,int c){          //print value of Array
return data[r][c];
}
