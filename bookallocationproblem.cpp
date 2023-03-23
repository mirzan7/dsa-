 #include<bits\stdc++.h>
 using namespace std;
 bool possiblesoln(vector<int>arr,int n,int m ,int mid)
 {
    int pagesum =0;
    int c=1;
    for (int i=0;i<n;i++)
    {
        if(arr[i]>mid)
            return false;
        if(pagesum+arr[i]>mid)
        {
            c++;
            pagesum=arr[i];
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
 int findpages(vector<int> arr,int m)
 {
    int n=arr.size()-1;
    if(m>n)
    {
        return -1;
    }
    int start=0;
    int end =accumulate(arr.begin(),arr.end(),0);
    int ans=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(possiblesoln(arr,n,m,mid))
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