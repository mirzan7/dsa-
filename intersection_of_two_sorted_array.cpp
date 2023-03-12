#include<iostream>
#include<vector>
using namespace std;
vector<int> intersectionoftwoarray(vector<int> arr1,vector<int> arr2)
{
    int m,n;
    vector<int> arr3;
    m=arr1.size();
    n=arr2.size();
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[i]<arr2[j])
                break;
            if(arr1[i]==arr2[j])
            {
                arr3.push_back(arr1[i]);
                arr2[j]=INT_MIN;
            }
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
