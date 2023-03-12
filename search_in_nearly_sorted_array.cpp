#include<iostream>  
using namespace std;
int binarysearch_nearly_sorted_array(int *arr,int n,int target)
{
    int first,last,mid;
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<last)
    {
        if(arr[mid]==target)
        {
            return mid;
        }
        if(arr[mid-1]==target)
        {
            return mid-1;
        }
        if(arr[mid+1]==target)
        {
            return mid+1;
        }
        if(target<arr[mid])
        {
            last=mid;
        }
        if(target>arr[mid])
        {
            first=mid;
        }
        mid=(first+last)/2;
    }
    return 0;
}
int main()
{
    int arr[]={3,10,20,40,50,70,80};
    int target,n;
    n=sizeof(arr)/sizeof(int);
    cin>>target;
    cout<<binarysearch_nearly_sorted_array(arr,n,target);
    return 0;
}