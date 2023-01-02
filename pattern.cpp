/*
pattern 
d
c d
b c d
a b c d
*/
#include<iostream>
using namespace std;
int main()
{
    int n=3;
    char ch='a';
    for(int i=n;i>=0;i--)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<char(ch+j)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
