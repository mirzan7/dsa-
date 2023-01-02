/*
print pattern
      *
    * *
  * * *
* * * *

*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n=4;
    for(i=0;i<=4;i++)
    {
        for(j=n;j>=i;j--)
        {
            if((i==j)||(i+j>=n))
              cout<<"* ";
            else
              cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}