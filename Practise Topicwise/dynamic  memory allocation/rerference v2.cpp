#include<iostream>
using namespace std;

void update1 (int n){  // this this like just a copy of variable , it cant change orginar value;
n++;
}

void update2(int& p){
p++;
}

int& func(int a){   // bad practise
    int num=a;
    int& ans=num;
    return ans;
}

int main(){
int n=5;
cout<<"For update1:\n";
cout<<"Before :"<<n<<endl;
update1(n);   //pass by value , no memory will create
cout<<"After: "<<n<<endl;

cout<<endl<<endl;
cout<<"For update2 :\n";
cout<<"Before :"<<n<<endl;
update2(n);   //pass by value , no memory will create
cout<<"After: "<<n<<endl;

func(n);



}
