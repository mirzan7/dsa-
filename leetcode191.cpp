#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int n=00000000000001011;
    while(n!=0)
    {
        if(n & 1)
            count++;
        n=n>>1;
    }
    cout<<endl<<count<<endl;
    return 0;
}