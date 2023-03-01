#include<iostream>
#include<vector>
using namespace std;
void move_neg_to_left(vector<int> arr)
{
    int l,h;
    l=0;
    h=arr.size()-1;
    while(l<=h)
    {
        if(arr[l]<0)
        {
            l++;
        }
        else
        {
            swap(arr[l],arr[h]);
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
    vector<int> arr={1,2,-3,-5,0,8,-9,10};
    move_neg_to_left(arr);
    return 0;
}