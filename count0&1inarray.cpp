#include<iostream>
using namespace std;
int main()
{
    int i=0,arr[10],c0=0,c1=0;
    for(i=0;i<10;)
    for (i = 0; i < 10; i++)
    {
        if (arr[i]==1)
        {
            c1++;
        }
        if (arr[i]==0)
        {
            c0++;
        }        
    }
    cout<<c0<<" "<<c1;
    return 0;
}