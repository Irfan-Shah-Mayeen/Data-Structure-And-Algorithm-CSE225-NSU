#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"
using namespace std;

int main()
{
    UnsortedType<int> List;

    cout << "Input values:\n";
    int m,n;
    cin >> m;
    int a[m];
    for(int i=0; i<m; i++){
        cin >> a[i];
    }

    cin >> n;
    int b[n];
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    int len = m+n, j=m-1, k=n-1;
    for(int i=0; i<len; i++){
        if(a[j]>b[k]){
            List.InsertItem(a[j]);
            j--;
        }
        else {
            List.InsertItem(b[k]);
            k--;
        }
    }

    cout << "Sorted elements: ";
    List.PrintList();

    List.MakeEmpty();
}
