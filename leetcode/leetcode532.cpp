#include<bits\stdc++.h>
using namespace std;
int k_diff_pair(vector<int> arr,int key)
{
    int i=0;
    int count=0;
    int j=i+1;
    
    while(j<=arr.size() && i<j)
    {
        if(arr[j]-arr[i]==key)
        {

            count++;
            i++;
            j++;
        }
        else if(arr[j]-arr[i]>key)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return count;
}
int main()
{
    vector<int> arr;
    arr={1,3,1,5,4};
    int key=0;
    sort(arr.begin(),arr.end());
    cout<<endl<<k_diff_pair(arr,key);
    return 0;
}