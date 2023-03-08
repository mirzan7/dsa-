#include<iostream>
using namespace std;
int factorial(int a)
{
    int prod =1;
    for(int i=1;i<=a;i++)
        prod*=i;
    return prod;
}
int ncr(int n,int r)
{
    float ncr;
    cout<<factorial(n)<<endl<<(factorial(r)*factorial(n-r))<<endl;
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main()
{
    int n,r;
    cout<<"n   ";
    cin>>n;
    cout<<"\nr    ";
    cin>>r;
    cout<<ncr(n,r);
    return 0;
}