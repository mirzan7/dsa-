#include<iostream>
#include<unordered_map>
using namespace std;
int findtheduplicatenumber(int *arr,int n)
{
    unordered_map<int,int> hash;
    for(int i=0 ;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(hash[arr[i]]>1)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    int arr[]={1,5,3,4,3,5,6};
    n=sizeof(arr)/sizeof(int);
    cout<<findtheduplicatenumber(arr,n)<<endl;
    return 0;
}