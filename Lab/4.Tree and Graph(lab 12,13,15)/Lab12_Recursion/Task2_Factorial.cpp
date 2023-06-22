/*Write a recursive function to find the factorial of a number.
int factorial(int n);*/

#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0 || n==1) return 1;

    return n*factorial(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
}