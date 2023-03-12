#include<iostream>
#include<vector>
using namespace std;
vector<int> intersectionoftwoarray(vector<int> arr1,vector<int> arr2)
{
    int m,n,i=0,j=0;
    vector<int> arr3;
    m=arr1.size();
    n=arr2.size();
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
        {
            arr3.push_back(arr1[i]);
            arr3[j]==INT_MIN;
        }
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return arr3;
}
int main()
{
    vector<int> arr1,arr2,arr3;
    arr1={1,2,2,2,3,4};
    arr2={2,2,3,3};
    arr3=intersectionoftwoarray(arr1,arr2);
    for(int i=0;i<arr3.size();i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}
