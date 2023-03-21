#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=5;j>=0;j--)
        {
            if(i==j)
            {
                cout<<i+1<<"";
            }
            if(i==n/2)
            {
                cout<<" ";
            }
            else if(i+j==n)
            {
                cout<<j<<"";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}