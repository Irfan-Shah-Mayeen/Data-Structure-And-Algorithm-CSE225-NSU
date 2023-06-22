#include <iostream>
#include<string>
#include"stacktype.cpp"


using namespace std;

int main()
{
    int count =4;
    while(count--){
        string input,postfix;
        cin>>input;
        StackType<char>st;
        for(char i:input)
        {
            if(i==' ')
                continue;
            if(isdigit(i))


        }



    }

}
