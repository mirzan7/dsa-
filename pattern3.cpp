/*

1 1 1 1
  2 2 2
    3 3
      4

*/
#include<iostream>
using namespace std;
int main()
{
    int i=0,n=4,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j>=2*i)
                cout<<i<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}