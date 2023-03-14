#include<bits\stdc++.h>
using namespace std;
vector<int> selection_sort(vector<int> arr)
{
    int i=0;
    int n=arr.size();
    while(i<=n)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
                swap(arr[i],arr[j]);
        }
        i++;
    }
    return arr;
}
void print_array(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> arr;
    vector<int> ans;
    arr={10,1,4,8,5,7};
    print_array(arr);
    cout<<endl;
    ans=selection_sort(arr);
    print_array(ans);
    return 0;
}