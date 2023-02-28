#include<iostream>
using namespace std;
void transpose(int arr[][10],int row,int col)
{
        cout<<endl<<endl;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[10][10];
    int i,j,row,col;
    cin>>row>>col;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    transpose(arr,row,col);
}