#include<bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int>& arr)
{
    unordered_map<int,int> hash;
    for(auto num : arr)
    {
        hash[num]++;
    }
    unordered_set<int> set;
    for(auto it:hash)
    {
        int freq=it.second;
        set.insert(freq);
    }
    return set.size() == hash.size();
}
int main()
{
    vector<int> arr;
    arr={1,2,2,1,1,3};
    cout<<uniqueOccurrences(arr);
    return 0;
}