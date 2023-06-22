#include<iostream>
using namespace std;

void print2(int c){

    for(int i=1;i<=c;i++)
    {
        if(i==c)
            cout<<"#";
        else
            cout<<".";
    }
   // cout<<endl;

}

void print4(int c){

    for(int i=1;i<=c;i++)
    {
        if(i==1)
            cout<<"#";
        else
            cout<<".";
    }
   // cout<<endl;

}





int main()
{

    int r,c;
    cin>>r>>c;
    //int test=0;
    int sum=2;


    for(int i=1; i<=r; i++)
    {
        int test=0;

        for(int j=1; j<=c; j++)
        {
            if(i%2!=0 )
            {
                cout<<"#";

            }


            else if(sum ==4)
            {

                print4(c);
                sum=2;
                break;


            }






         else if(sum ==2)
            {

                print2(c);
                sum=4;
                break;


            }



}



        cout<<endl;
    }






}

