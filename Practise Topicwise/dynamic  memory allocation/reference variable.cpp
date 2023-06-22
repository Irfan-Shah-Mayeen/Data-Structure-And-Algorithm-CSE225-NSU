#include<iostream>
using namespace std;
int main(){

//same memory different name ---> reference variable
int i=5;
 int&  j =i; //create reference variable
 cout<<i<<endl;
 i++;
 cout<<i<<endl;
 j++;
 cout<<i<<endl;
 i++;
 cout<<j<<endl;

}
