#include<iostream>
using namespace std;
int finthefirstoccurence(int *arr, int size, int target)
{
    int first,mid,end;
    first=0;
    end=size-1;
    mid=(first+end)/2;
    int ans=-1;
    while(first<=end)
    {
        if(arr[mid]==target)
        {
            ans=mid;
            end=mid-1;
        }
        else if(target>arr[mid])
        {
            first=mid+1;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
        mid=(first+end)/2;
    }
    return ans;
}
int main()
{
    int arr[]={1,2,4,4,4,4,4,4,5,};
    int n=9;
    int target;
    cin>>target;
    cout<<finthefirstoccurence(arr,n,target);
    return 0;
}