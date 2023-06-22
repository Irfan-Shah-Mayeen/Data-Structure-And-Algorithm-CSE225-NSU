#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    int a[n],sumeven=0,sumodd=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0)
            sumeven+=a[i];
        else
            sumodd+=a[i];

    }
    if(sumeven>sumodd)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}



}
