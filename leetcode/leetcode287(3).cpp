#include<iostream>
#include<vector>
using namespace std;
int findtheduplicatenumber(vector<int> arr)
{
    while(arr[0]!=arr[arr[0]])
    {
        swap(arr[0],arr[arr[0]]);
    }
    return arr[0];
}
int main()
{
    vector<int> arr;
    arr={1,2,3,2,4};
    cout<<findtheduplicatenumber(arr)<<endl;
    return 0;
}