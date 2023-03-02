#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findtheduplicatenumber(vector<int> arr)
{
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==arr[i+1])
            return arr[i];
    }
    return -1;
}
int main()
{
    vector<int> arr;
    arr={1,2,3,2,4};
    cout<<findtheduplicatenumber(arr)<<endl;
    return 0;
}
