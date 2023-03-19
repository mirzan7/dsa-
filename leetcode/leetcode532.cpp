#include<bits\stdc++.h>
using namespace std;
int k_diff_pair(vector<int> arr,int key)
{
    int i=0;
    set<pair<int,int>> answer;
    int j=1;
    while(j<arr.size())
    {
        if(arr[j]-arr[i]==key)
        {
            answer.insert({arr[i],arr[j]});
            i++;
            j++;
        }
        else if(arr[j]-arr[i]>key)
        {
            i++;
        }
        else
        {
            j++;
        }
        if(i==j)
            j++;
    }
    return answer.size();
}
int main()
{
    vector<int> arr;
    arr={1,3,1,5,4};
    int key=0;
    sort(arr.begin(),arr.end());
    cout<<endl<<k_diff_pair(arr,key);
    return 0;
}