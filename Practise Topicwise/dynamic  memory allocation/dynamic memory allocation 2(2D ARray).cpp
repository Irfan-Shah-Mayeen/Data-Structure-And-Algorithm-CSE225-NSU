/*
2D Array
static : int arr[row][col];
dynamic:
int** arr= new int*[n]
for(..........){
arr[i]= new int[n];
}


*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;
// 2d array create
int** arr= new int*[row];
 for(int i=0;i<row;i++){

    arr[i]= new int[col];
 }    // 2d array creation done

 //taking input
 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
 }  // input done


 // output
 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }  // ouput done



 //deallocation

 for(int i=0;i<row;i++){
        delete []arr[i];
    }

delete []arr;

 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }  // ouput done

 cout<<"ends";


return 0;
}
