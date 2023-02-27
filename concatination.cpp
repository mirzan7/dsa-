#include<iostream>
#include<vector>
using namespace std;
void concatinate(vector<int> arr1,vector<int> arr2){
    vector<int> arr3;
    int j=0;
    for(int i=0;i<(arr1.size()+arr2.size());i++)
    {
        if(i>=arr1.size())
        {
            arr3.push_back(arr2[j]);
            j++;
        }
        else{
            arr3.push_back(arr1[i]);
        }
    }
    for(int i=0;i<arr3.size();i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> arr1,arr2,arr3;
    arr1={1,2,3,4,5};
    arr2={6,7,8,9};
    concatinate(arr1,arr2);
    cout<<endl;
    return 0;
}