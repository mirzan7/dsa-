#include <iostream>
using namespace std;
int row = 10;
int col = 10;
void minmax(int arr[][10], int row, int col)
{
    int i,j,maxi=arr[0][0],mini=arr[0][0];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (arr[i][j]>=maxi)
                maxi=arr[i][j];
            if (arr[i][j]<=mini)
                mini=arr[i][j];
        }
    }
    cout<<maxi<<"   "<<mini;
}
int main()
{
    int col, row, i, j;
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
    minmax(arr,row,col);
    return 0;
}