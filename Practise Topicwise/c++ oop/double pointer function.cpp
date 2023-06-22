#include<iostream>
using namespace std;

void update (int **p2){

// p=p+1;   // no change , before and after same
//*p2=*p2+1;  //p will change
**p2=**p2+1;
}

int main(){
int i=5;
int* p=&i;
int** p2=&p;

cout<<"Before i:"<<i<<endl;
cout<<"before p:"<<p<<endl;
cout<<"before p2:"<<p2<<endl;
update(p2);
cout<<"After i:"<<i<<endl;
cout<<"After p:"<<p<<endl;
cout<<"After p2:"<<p2<<endl;


}
