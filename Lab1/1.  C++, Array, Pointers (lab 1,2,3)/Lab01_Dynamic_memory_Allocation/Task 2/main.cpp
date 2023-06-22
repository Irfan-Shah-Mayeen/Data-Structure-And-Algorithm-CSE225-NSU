#include <iostream>

using namespace std;

int main()
{
    int* row=new int;
    int* col= new int;
    cin>>*row>>*col;

    char** ch= new char*[*row];
    for(int i=0;i<*row;i++){
        ch[i]=new char[*col];
    }

    for(int i=0;i<*row;i++){

        for(int j=0;j<*col;j++){

            cin>>ch[i][j];
        }
    }

     for(int i=0;i<*row;i++){

        for(int j=0;j<*col;j++){

            cout<<ch[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<*row;i++){
        delete []ch[i];
    }
    delete []ch;
    delete row;
    delete col;


        return 0;
}
