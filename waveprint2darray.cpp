#include<iostream>
#include<vector>
using namespace std;
void waveprint(vector<vector<int>> arr)
{
    int col,row;
    row=arr.size();
    col=arr[0].size();
    for(int i=0;i<col;i++)
    {
        if((i&1)==1)
        {
            for(int j=0;j<row;j++)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        else
        {
            for(int j=row-1;j>=0;j--)
            {
                cout<<arr[j][i]<<" ";
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