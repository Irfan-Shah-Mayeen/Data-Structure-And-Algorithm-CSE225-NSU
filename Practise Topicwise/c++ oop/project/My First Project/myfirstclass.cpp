#include "myfirstclass.h"
#include<iostream>
using namespace std;

MyFirstClass::MyFirstClass()
{
   cout<<"Inside the Constructor"<<endl;;
}

MyFirstClass :: ~MyFirstClass(){

cout<<"Inside the destructor"<<endl;    // this will called when the prograM END
}


void MyFirstClass:: display(){

cout<<"Inside the display method"<<endl;
}

void MyFirstClass :: show(){

cout<<"Inside the show method"<<endl;
}
