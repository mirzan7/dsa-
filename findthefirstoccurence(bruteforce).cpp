#include<iostream>
using namespace std;
int finthefirstoccurence(int *arr, int size, int target)
{
    int first,mid,end;
    first=0;
    end=size-1;
    mid=(first+end)/2;
    while(first<end)
    {
        if(arr[mid]==target)
        {
            int mm=(first+mid)/2;
            while(mm<mid)
            {
                if(arr[mm]==target)
                {
                    return mm+1;
                }
                if(target>arr[mm])
                {
                    first=mm;
                }
                if(target<arr[mm])
                {
                    end=mm;
                }
                mm=(first+mid)/2;
            }
        }
        if(target>arr[mid])
        {
            first=mid;
        }
        if(target<arr[mid])
        {
            end=mid;
        }
        mid=(first+end)/2;
    }
    return 0;
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