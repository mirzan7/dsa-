#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> arr1,vector<int> arr2,int sum)
{
    vector <int> arr3;
    for(int i=0;i<arr1.size();i++)
    {
        for(int j=i+1;j<arr2.size();j++)
        {
            if(arr1[i]+arr2[j]==sum)
            {
                arr3.push_back(arr1[i]);
                arr3.push_back(arr2[j]);
            }
        }
    }
    return arr3;
}
int main()
{
    vector <int> arr1,arr2,arr3;
    int sum;
    arr1={1,3,5,7};
    arr2={2,4,6};
    sum=9;
    arr3=pairsum(arr1,arr2,sum);
    for(int i=0;i<arr3.size();i++)
    {
        cout<<arr3[i]<<" ";
        if (i%2!=0)
            cout<<endl;
    }
    cout<<endl;
    return 0;
}