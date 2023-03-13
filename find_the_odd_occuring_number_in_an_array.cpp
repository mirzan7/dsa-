#include<bits\stdc++.h>
using namespace std;
int odd_oocuring_number(vector<int> arr)
{
    int first,last,mid;
    first=0;
    last=arr.size()-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(first==last)
        {
            return first;
        }
        if(mid%2==0)
        {
            if(arr[mid]==arr[mid+1])
            {
                first=mid+2;
            }
            else
            {
                last=mid;
            }
        }
        else
        {
            if(arr[mid]==arr[mid-1])
            {
                first=mid+1;
            }
            else
            {
                last=mid-1;
            }
        }
        mid=first+(last-first)/2;
    }
    return -1;
}
int main()
{
    vector<int> arr{1,1,2,2,3,3,4,5,5,6,6,7,7,8,8,7,7};
    int ans=odd_oocuring_number(arr);
    cout<<arr[ans];
    return 0;
}