/*

      0      
    0 1 0
  0 1 2 1 0
0 1 2 3 2 1 0
      

*/
#include<iostream>
using namespace std;
int main()
{
    int i=0,n=4,j,k=0;
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<(n+n-1);j++)
        {
            if((i+j>=(n+(n-1))/2)&&(i+j<n+2*i))
            {
                cout<<k<<" ";
                if(j>n-2)
                    k--;
                else
                    k++;
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