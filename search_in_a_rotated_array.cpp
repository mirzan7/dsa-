#include<iostream>
#include<vector>
using namespace std;
int find_element(vector<int> nums,int target,int left,int right)
{
    if(left>right)
        return -1;
    int mid = left +(right-left)/2;
    if(nums[mid]==target)
    {
        return mid;
    }
    if(nums[mid]>=nums[left])
    {
        if(nums[left]<=target && target <=nums[mid])
            return find_element(nums,target,left,mid-1);
        else
            return find_element(nums,target,mid+1,right);
    }
    else
    {
        if(nums[mid]<=target && target<=nums[right])
            return find_element(nums,target,mid+1,right);
        else
            return find_element(nums,target,left,mid-1);
    }
}
int main()
{
    vector<int> arr{4,5,6,7,8,1,2,3};
    cout<<find_element(arr,1,0,7);
    return 0;
}