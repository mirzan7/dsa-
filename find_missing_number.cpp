#include<iostream>
#include<vector>
using namespace std;
int findmissingnumber(vector<int> arr)
{
    int ans;
    int f,mid,l;
    int diff=0;
    f=0;
    l=arr.size()-1;
    mid=(f+l)/2;
    diff=arr[1]-arr[0];
    while(f<l)
    {
        if(arr[mid]-arr[mid-1]!=diff)
        {
            cout<<mid;
            ans=arr[mid]+diff;
        }
        else if((arr[mid]-mid )!=diff)
        {
            l=mid-1;
            cout<<"left  "<<l<<endl;
        }
        else if((arr[l]-l)!= diff)
        {
            f=mid+1;
            cout<<"right  "<<f<<endl;
        }
        mid=(f+l)/2;
    }
    cout<<ans<<endl;
    return ans;
}
int main()
{
    vector<int> arr{1,2,3,4,6,7,8};
    cout<<findmissingnumber(arr);
    return 0;
}