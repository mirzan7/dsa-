#include<iostream>
using namespace std;
// int binarysearch(int *arr[3][3],int m,int n,int target)
// {
//     int first,last,mid;
//     first=0;
//     last=m*n-1;
//     mid=first-(last-first)/2;
//     while(first<last)
//     {
//         if(arr[mid][mid]==target)
//         {
//             return arr[mid][mid];
//         }
//         if(arr[mid][mid]>target)
//         {
//             first=mid+1;
//         }
//         if(arr[mid][mid]<target)
//         {
//             last=mid-1;
//         }
//         mid=first-(last-first)/2;
//     }
//     return 0;
// }
int main()
{
    int arr[3][3]{{1,2,3},{4,5,6},{7,8,9}};
    int target;
    cin>>target;
    
    // cout<<binarysearch(arr,3,3,target);
    int first,last,mid,col=3;
    first=0;
    last=8;
    mid=first+(last-first)/2;
    while(first<=last)
    {
        int rowi=mid/col;
        int coli=mid%col;
        if(arr[rowi][coli]==target)
        {
            cout<<endl<< "output"<<arr[rowi][coli];
        }
        if(arr[rowi][coli]>target)
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
        mid=first+(last-first)/2;
    }
    return 0;    
}