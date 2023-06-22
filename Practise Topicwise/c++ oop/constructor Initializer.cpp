#include<iostream>
using namespace std;

class Student {
public :
    const int admissionFee;
    const int examFee;
    int id;
    Student (int x,int y,int z)
    :admissionFee(x),examFee(y)
    {
        id=z;
    cout<<admissionFee<<endl;
      cout<<examFee<<endl;
      cout<<id<<endl;
    }



};

int main(){
Student s1(1500,500,2);

}
