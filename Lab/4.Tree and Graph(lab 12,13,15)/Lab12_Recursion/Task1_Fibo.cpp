/*Write a recursive function that returns the nth Fibonacci number from the Fibonacci 
series.
int fib(int n);*/

#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==2 || n==3) return 1;
    if(n==1) return 0;
    
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
}