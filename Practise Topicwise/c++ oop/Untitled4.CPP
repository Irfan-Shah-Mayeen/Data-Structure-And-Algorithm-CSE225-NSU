#include<bits/stdc++.h>
using namespace std;
int main(){
int r,c;
cin>>r>>c;
//int ar[i][j];
int temp[r+c];
int temp2[r+c];
int temp3[r+c];

for(int i=0;i<(r+c);i++){

       cin>>temp[i];
       temp2[i]=temp[i];
    }
  sort(temp, temp + (r+c));


  for(int i=0;i<(r+c);i++){
        for(int j=0;j<(r+c);j++){
        if(temp2[i]==temp[j])
        {
            temp3[i]=j;
       }

    }

  }



  for(int i=0;i<r+c;i++){
  if(i==r)
  cout<<endl;
    cout<<temp3[i]+1<<" ";
  }





}




