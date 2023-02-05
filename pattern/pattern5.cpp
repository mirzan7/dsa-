/*

1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/


#include<iostream>
using namespace std;
int main()
{
    int i=0,n=5,j,k=1;
    for(i=0;i<n;i++)
    {
        k=1;
        for(j=0;j<n*2;j++)
        {
            if ((i>0)&&(i+j>=n)&&(i+j<=(n-1)+2*i))
            {
                cout<<"* ";
            }
            else if(j>n-1)
            {    
                cout<<--k<<" ";
            }
            else
            {
                cout<<k++<<" ";
            }
            
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    return 0;
}