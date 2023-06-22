#include<iostream>
using namespace std;
int main(){
int *row = new int;
int *col = new int ;
cout<<"Row: "<<endl;
cin>>*row;
int** arr = new int*[*row];
int colArr[*row];
for(int i=0;i<*row;i++){
    cout<<"For "<<i<<"no Row's Colum: "<<endl;
    cin>>*col;
    arr[i]=new int[*col];
    colArr[i]=*col;
}
for(int i=0;i<*row;i++){
    for(int j=0;j<colArr[i];j++){
        cin>>arr[i][j];
    }
}

for(int i=0;i<*row;i++){
    for(int j=0;j<colArr[i];j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

for(int i=0;i<*row;i++){
    delete []arr[i];
}
delete []arr;
delete row;
delete col;
return 0;
}



