#include<bits/stdc++.h>
using namespace std;
bool ifpossible(vector<int> arr,int n,int m,int mid)
{
    int pagesum=0;
    int c=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mid)
            return false;
        if(arr[i]+pagesum>mid)
        {
            pagesum=arr[i];
            c++;
            if(c>m)
                return false;
        }
        else
        {
            pagesum+=arr[i];
        }
    }
    return true;
}
int bookallocation(vector<int> arr,int n,int m)
{
    int ans=-1;
    if(m>n)
    {
        return -1;
    }
    int start = 0;
    int end=accumulate(arr.begin(),arr.end(),0);
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(ifpossible(arr,n,m,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr;
    int n=4;
    arr={12,34,67,90};
    int m=2;
    cout<<bookallocation(arr,n,m);
    return 0;
}