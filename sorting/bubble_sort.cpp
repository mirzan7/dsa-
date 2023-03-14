#include<bits\stdc++.h>
using namespace std;
vector<int> bubble_sort(vector<int> arr)
{
    int n;
    n=arr.size()-1;
    for(int i=1;i<n;i++)
    {
        bool swapped=false;
        for(int j=0;j<(n-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
            break;
    }
    return arr;
}
void print_array(vector<int> arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> arr1,arr2;
    arr1={10,1,4,8,5,7};
    print_array(arr1);
    arr2=bubble_sort(arr1);
    cout<<endl;
    print_array(arr2);
    return 0;
}