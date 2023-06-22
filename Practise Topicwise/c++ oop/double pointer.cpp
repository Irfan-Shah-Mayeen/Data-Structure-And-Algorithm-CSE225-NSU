#include<iostream>
using namespace std;
int main(){

int i=5;
int* ptr1=&i;
int** ptr2=&ptr1;


cout<<ptr1<<endl; // address of i store in 1st pointer ptr1
cout<<&i<<endl;   //address of i
cout<<*ptr2<<endl; // address of i , *ptr2---->*(&ptr1)----->&i;

cout<<&ptr1<<endl; //address of 1st pointer ptr1
cout<<ptr2<<endl;  //address of ptr1 store in 2nd pointer ptr2

cout<<&ptr2<<endl; //address of 2nd pointer ptr2

cout<<**ptr2<<endl; // value of i , **ptr2---> *ptr1--->*(&i)---> i=5
cout<<*ptr1<<endl;   // value of i , *ptr1--->*(&i)---> i=5
cout<<i<<endl;       //value of i


}
