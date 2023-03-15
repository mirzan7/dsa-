#include<bits\stdc++.h>
using namespace std;
void print_array(vector <int> arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
vector<int> insertion_sort(vector<int> arr)
{
    int sorted=0,j;
    int n=arr.size();
    for(int i=1;i<n;i++)
    {
        sorted=arr[i]; 
        j = i - 1;
        cout<<"i=="<<i<<endl;
        while (j >= 0 && arr[j] > sorted)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            print_array(arr);
        }
        cout<<"\n==key=>"<<sorted<<endl;
        arr[j + 1] = sorted;
        cout<<"==>";
        print_array(arr);
        cout<<endl;
    }
    return arr;
}
int main()
{
    vector<int> arr,brr;
    arr={10,1,7,6,14,9};
    print_array(arr);
    brr=insertion_sort(arr);
    print_array(brr);
}