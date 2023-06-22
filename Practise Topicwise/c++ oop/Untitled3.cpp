#include<bits/stdc++.h>
using namespace std;
int main(){
int r,c;
cin>>r>>c;
int a[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
        cin>>a[i][j];
}

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
        {
          if(a[i][j]==0)
                cout<<'.';
          else if(a[i][j]==1)
                cout<<"A";
                else if(a[i][j]==2)
                cout<<"B";
                else if(a[i][j]==3)
                cout<<"C";
                else if(a[i][j]==4)
                cout<<"D";
                else if(a[i][j]==5)
                cout<<"E";
                else if(a[i][j]==6)
                cout<<"F";
                else if(a[i][j]==7)
                cout<<"G";
                else if(a[i][j]==8)
                cout<<"H";
                else if(a[i][j]==9)
                cout<<"I";
                else if(a[i][j]==10)
                cout<<"J";
                else if(a[i][j]==11)
                cout<<"K";
                else if(a[i][j]==12)
                cout<<"L";
                else if(a[i][j]==13)
                cout<<"M";
                else if(a[i][j]==14)
                cout<<"N";
                else if(a[i][j]==15)
                cout<<"O";
                else if(a[i][j]==16)
                cout<<"P";
                else if(a[i][j]==17)
                cout<<"Q";
                else if(a[i][j]==18)
                cout<<"R";
                else if(a[i][j]==19)
                cout<<"S";
                else if(a[i][j]==20)
                cout<<"T";
                else if(a[i][j]==21)
                cout<<"U";
                else if(a[i][j]==22)
                cout<<"V";
                else if(a[i][j]==23)
                cout<<"W";
                else if(a[i][j]==24)
                cout<<"X";
                else if(a[i][j]==25)
                cout<<"Y";
                else if(a[i][j]==26)
                cout<<"Z";
        }
        cout<<endl;
}


}
