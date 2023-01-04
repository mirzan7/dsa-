#include<iostream>
using namespace std;
int main()
{
    int n=10,a=0,b=1,fib;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<n;i++)
    {
        fib=a+b;
        cout<<fib<<" ";
        a=b;
        b=fib;
    }
    return 0;
}