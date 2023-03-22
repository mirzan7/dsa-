#include<bits\stdc++.h>
using namespace std;
int binarysearch(vector<int> arr,int start,int end,int key)
{

    while(start<end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
                return mid;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
}
int exponentialsearch(vector<int> arr, int key)
{
    int n=arr.size()-1;
    if(arr[0]==key)
        return 0;
    int i=1;
    while(i<n && arr[i]<=key)
    {
        i=i*2;
    } 
    return binarysearch(arr,i/2,min(i,n-1),key);
}
int main()
{
    vector<int> arr;
    arr={3,4,5,6,11,13,14,15,56,70,80};
    int key=13;
    cout<<exponentialsearch(arr,key);
    return 0;
}