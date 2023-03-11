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
    int ans=sqroot(n);
    double actualans;
    int precision;
    double step=0.1;
    cout<<"precisio   ";
    cin>>precision;
    for(int i=0;i<precision;i++)
    {
        for(double j=ans;j*j<=n;j=j+step)
        {
            actualans=j;
        }
        step/=10;
    }
    cout<<actualans;
    return 0;
}