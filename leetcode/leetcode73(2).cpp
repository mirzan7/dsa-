#include <iostream>
#include <vector>
#include <utility>
using namespace std;
void sort(vector<int> arr)
{
    int l,m,h;
    l=m=0;
    h=arr.size()-1;
    while(m<h)
    {
        if(arr[m]==0)
        {
            swap(arr[m],arr[l]);
            m++;
            l++;
        }
        else if(arr[m]==1)
        {
            m++;
        }
        else
        {
            swap(arr[m],arr[h]);
            h--;
        }

    }
    cout<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    sort(arr);
    return 0;
}