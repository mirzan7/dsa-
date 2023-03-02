#include<iostream>
#include<vector>
using namespace std;
int findtheduplicalenumber(vector<int> arr)
{
    int ans=-1;
    for (int i = 0; i < arr.size(); i++)
    {
        int index=abs(arr[i]);
        if(arr[0]!=0 && arr[index]>0)
        {
            swap(arr[0],arr[index]);
            break;
        }
        arr[index]*=-1;
    }
    return arr[0];   
}
int main()
{
    vector<int> arr;
    arr={1,2,3,2,4};
    cout<<findtheduplicalenumber(arr)<<endl;
    return 0;
}