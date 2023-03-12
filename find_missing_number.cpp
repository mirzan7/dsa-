#include<iostream>
#include<vector>
using namespace std;
int findmissingnumber(vector<int> ar)
{
     int l = 0, r = ar.size()-1;
     
    while (l <= r) 
    {
        int mid = (l + r) / 2;
        if (ar[mid] != mid + 1 && ar[mid - 1] == mid)
            return mid + 1;
        if (ar[mid] != mid + 1)
        {
            cout<<"last  "<<ar[r]<<endl;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
            cout<<"first  "<<ar[l]<<endl;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1,2,3,4,6,7,8};
    cout<<findmissingnumber(arr);
    return 0;
}