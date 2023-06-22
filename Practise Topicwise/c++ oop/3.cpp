#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int r1 =-1,r2=-1;
    for(int i=0;i<s.length();i++){
            for(int j=1;j<s.length();j+=2){

                if(s[i]==s[j])
                    r1=1;
                    else
                        r1=0;
                break;
            }
            if(r1==1)
                break;
    }

    for(int i=1;i<s.length();i++){
            for(int j=2;j<s.length();j+=2){

                if(s[i]==s[j])
                    r2=1;
                    else
                        r2=0;
                break;
            }
            if(r2==1)
                break;

    }
    if(r1==1 && r2==1)
        cout<<"NO"<<endl;
    else
        cout<<"YEs"<<endl;





}


}
