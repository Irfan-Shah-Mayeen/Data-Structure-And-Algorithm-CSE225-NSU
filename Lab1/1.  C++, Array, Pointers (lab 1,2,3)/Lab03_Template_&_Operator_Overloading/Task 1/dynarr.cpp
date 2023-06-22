#include"dynarr.h"
#include<iostream>
using namespace std;

template<class T>
DynArr<T>::DynArr(){
data = NULL;
size =0;
}

template<class T>
DynArr<T>::DynArr(int s){
data = new T[s];
size=s;
}

template<class T>
DynArr<T>::~DynArr(){
delete []data;
}

template<class T>
void DynArr<T>::SetValue(int index,T value){
    data[index]=value;
}

template<class T>
T DynArr<T>::GetValue(int index){
return data[index];
}


