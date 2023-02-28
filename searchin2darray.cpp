#include <iostream>
using namespace std;
int row=10;
int col=10;
void search(int arr[][10],int key,int row,int col)
{
    int i,j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if(arr[i][j]==key)
                cout<<arr[i][j]<<"found @   row:"<<i+1<<"  col:"<<j+1;
        }
    }
}
int main()
{
    int col, row, i, j, sum = 0;
    int key;
    cin >> row;
    cin >> col;
    int arr[10][10];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin>>key;
    search(arr,key,row,col);
    return 0;
}