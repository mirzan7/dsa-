
#include<iostream>
using namespace std;
int main()
{
    int i=0,n=5,j,k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i)-1;j++)
        {
            cout<<"  ";
        }
        for(j=0;j<n;j++)
        {
            if(i==0 || i==n-1)
            {
                cout<<j+1<<" ";
            }
            else if(j==0)
            {
                cout<<j+1<<" ";
            }
            else if(j==n-1)
            {
                cout<<i+1<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    return 0;
}