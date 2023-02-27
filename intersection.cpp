#include<iostream>
#include<vector>
using namespace std;
vector<int> intersection(vector<int> arr1,vector<int> arr2)
{
    vector<int> arr3;
    int count=0;
    for(int i=0;i<arr1.size();i++)
    {
        count=0;
        for(int j=0;j<arr2.size();j++)
        {
            if(arr2[j]==arr1[i])
            {
                arr2[j]=-1;
                arr3.push_back(arr1[i]);count++;
            }
        }
    }
    return arr3;
}
int main()
{
    vector<int> arr1,arr2,arr3;
    arr1={1,2,3,4,5,6,7,8,9};
    arr2={1,3,5,7,9};
    arr3=intersection(arr1,arr2);
    for(int i=0;i<arr3.size();i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    return 0;
}