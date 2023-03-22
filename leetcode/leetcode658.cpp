#include <bits/stdc++.h>
using namespace std;
vector<int> rearrange(vector<int> arr, int n, int x)
{
    int l=0;
    int h=arr.size()-1;
	while(h-l>=n)
    {
        if(x-arr[l]>arr[h]-x)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    return vector<int>(arr.begin()+l,arr.begin()+h+1);
}
void printarray(vector<int> subarray)
{
    for(int i=0;i<subarray.size();i++)
    {
        cout<<subarray[i]<<"  ";
    }
}
int main()
{
	vector<int> arr,subarray;
    arr = { 12,15,22,30,35,39,42,45,48,50,53,55,56};
	subarray=rearrange(arr, 4, 35);
    printarray(subarray);
	return 0;
}
 