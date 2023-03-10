#include<iostream>
#include<vector>
using namespace std;
int findmissingnumber(vector<int> arr)
{
    int ans;
    int first,mid,last;
    int diff=0;
    first=0;
    last=arr.size()-1;
    mid=(first+last)/2;
    while(first<last)
    {
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            return arr[mid];
        }
        if(arr[mid+1]>arr[mid])
        {
            first=mid;
        }
        if(arr[mid-1]>arr[mid])
        {
            last=mid;
        }
        mid=(first+last)/2;
    }
    return 0;
}
int main()
{
    vector<int> arr{0,5,10,2};
    cout<<findmissingnumber(arr);
    return 0;
}