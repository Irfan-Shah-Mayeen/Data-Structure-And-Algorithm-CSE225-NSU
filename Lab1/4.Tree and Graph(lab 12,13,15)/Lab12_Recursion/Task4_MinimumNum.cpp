/*Write a recursive function that find the minimum element in an array of integers.
int findMin(int a[], int size);*/


#include<iostream>
using namespace std;

int findMin(int a[], int size)
{
    if(size == 1) return a[0];
    
    if(a[0]<a[1]){
        a[1] = a[size-1];
    }
    else{
        a[0] = a[size-1];
    }
    return findMin(a, --size);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << findMin(a,n);
}