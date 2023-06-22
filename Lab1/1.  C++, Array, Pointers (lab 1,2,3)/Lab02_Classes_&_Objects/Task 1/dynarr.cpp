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
 size = 0;
}

DynArr::~DynArr(){
delete []data;
}

DynArr::DynArr(int s){
data = new int[s];
size=s;
}

void DynArr::SetValue(int index, int value){
data[index]=value;

}

int DynArr::GetValue(int index){
return data[index];
}
