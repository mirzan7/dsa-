#include<iostream>
using namespace std;
int main()
{
    int col,row,i,j,sum=0;
    cin>>row;
    cin>>col;
    int arr[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<col;j++)
        {
            sum+=arr[i][j];
        }
        cout<<endl<<"sum    "<<sum<<endl;
    }
    return 0;
}