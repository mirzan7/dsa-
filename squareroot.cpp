#include<iostream>
#include<vector>
using namespace std;
int sqroot(int n)
{
    int target =n;
    int s,e,mid;
    s=0;
    e=n;
    mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(mid*mid==target)
        {
            return mid;
        }
        if(mid*mid>target)
        {
            e=mid-1;
        }
        else
        {
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<sqroot(n);
    return 0;
}