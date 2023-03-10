#include<iostream>
#include<vector>
using namespace std;
int findmissingnumber(vector<int> arr)
{
    int first,mid,last;
    first=0;
    last=arr.size()-1;
    mid=first+(last-first)/2;
    // while(first<last)
    // {
    //     if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
    //     {
    //         return arr[mid];
    //     }
    //     if(arr[mid+1]>arr[mid])
    //     {
    //         first=mid;
    //     }
    //     if(arr[mid-1]>arr[mid])
    //     {
    //         last=mid;
    //     }
    //     mid=(first+last)/2;
    // }
    while(first<last)
    {
        if(arr[mid]<arr[mid+1])
        {
            first=mid+1;
        }
        else
        {
            last=mid;
        }
        mid=first+(last-first)/2;
    }
    return first;
}
int findmissingnumber1(vector<int>& arr)
{
    return findmissingnumber(arr);
}
int main()
{
    vector<int> arr{0,5,10,2};
    cout<<findmissingnumber1(arr);
    return 0;
}