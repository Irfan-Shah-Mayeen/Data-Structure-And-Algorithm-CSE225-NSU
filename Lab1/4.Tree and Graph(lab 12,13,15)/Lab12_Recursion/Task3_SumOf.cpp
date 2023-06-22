/*Write a recursive function that returns the sum of the digits of an integer.
int sumOfDigits(int x);*/

#include<iostream>
using namespace std;

int sumOf(int n)
{
    if(n==0) return n;

    return (n%10) + sumOf(n/10);
}

int main()
{
    int n;
    cin >> n;
    cout << sumOf(n);
}