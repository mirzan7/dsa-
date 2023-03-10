#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int *arr,int size,int target)
{
    int f,m,l;
    f=0;
    l=size-1;
    m=(f+l/2);
    while(f<l)
    {
        if(arr[m]==target)
            return m+1;
        if(target<arr[m])
        {
            l=m;
        }
        if(target>arr[m])
        {
            f=m;
        }
        m=(f+l)/2;
    }
    return 0;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int target;
    cin>>target;
    cout<<binarysearch(arr,n,target);
    return 0;
}