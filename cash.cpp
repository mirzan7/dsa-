#include<iostream>
using namespace std;
int main ()
{
    int cash;
    cin>>cash;
    cout<<"hundred  :"<<cash/100;
    cash=cash%100;
    cout<<"\nfifty  :"<<cash/50;
    cash=cash%50;
    cout<<"\ntwenty  :"<<cash/20;
    cash=cash%20;
    cout<<"\nonr     :"<<cash/1;
}