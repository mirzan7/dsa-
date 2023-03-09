#include<iostream>
#include<vector>
using namespace std;
void waveprint(vector<vector<int>> arr)
{
    int col,row;
    row=arr.size();
    col=arr[0].size();
    for(int i=0;i<row;i++)
    {
        if((i&1)==1)
        {
            for(int j=0;j<col;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
            for(int j=col-1;j>=0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
int main()
{
    vector<vector <int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    waveprint(arr);
    return 0;
}