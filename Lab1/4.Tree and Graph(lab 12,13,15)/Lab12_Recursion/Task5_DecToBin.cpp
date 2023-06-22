/*Write a recursive function that converts a decimal number to binary number.
int DecToBin(int dec);*/

#include<iostream>
using namespace std;

int DecToBin(int dec)
{
    if(dec==0) return dec;

    return (dec%2) + 10*DecToBin(dec/2);
}

int main()
{
    int n;
    cin >> n;
    cout << DecToBin(n);
}