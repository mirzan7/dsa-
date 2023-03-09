/*
pattern 
0
010
01210
0123210
*/
#include<iostream>
using namespace std;
int main()
{
    int n=3,j,i;
    char ch='a';
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(j=i;j>0;j--)
        {
            cout<<j-1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
