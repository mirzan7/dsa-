#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void print_3_largest_number(vector<int> arr)
{
    int first,second,third;
    first=second=third=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>first)
        {
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first)
        {
            third=arr[i];
            second=arr[i];
        }
        else if(arr[i]>third && arr[i]!=third)
        {
            third=arr[i];
        }        
    }
    cout<<"first   :"<<first<<endl;
    cout<<"second  :"<<second<<endl;
    cout<<"third   :"<<third<<endl;
}
int main()
{
    vector<int> arr;
    int n;
    cout<<"enter the size of the array   ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        arr.push_back(i);
    }
    print_3_largest_number(arr);
    return 0;
}