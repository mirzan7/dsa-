#include<bits/stdc++.h>
using namespace std;
void print_largest_number(vector<int> arr)
{
    sort(arr.begin(),arr.end());
    for(int i=arr.size()-1;i>=arr.size()-3;i--)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> arr;
    int n,number;
    cout<<"enter the size of the array   ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>number;
        arr.push_back(number);
    }
    print_largest_number(arr);
    return 0;
}