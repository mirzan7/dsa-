#include<iostream>
#include<vector>
using namespace std;
int find_pivot(vector<int> arr)
{
    int start,mid,end;
    start=0;
    end=arr.size()-1;
    mid=start - (end-start)/2;
    while(start<end)
    {
        if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1])
            return arr[mid];
        if(arr[mid+1]>arr[mid])
        {
            start=mid;
        }
        if(arr[mid-1]>arr[mid])
        {
            end=mid;
        }
        mid=(start+end)/2;
    }
}
int main()
{
    vector<int> arr{4,5,6,7,8,1,2,3};
    cout<<find_pivot(arr);
    return 0;
}