 #include<bits\stdc++.h>
 using namespace std;
 vector<int> printsubarray(vector<int>arr,int n, int x)
 {
    int s=0;
    int h=0;
    int e=arr.size()-1;
    int mid=s+e/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1])
        {
            h=mid;
        }
        else if(arr[mid]-n>n)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    int l=h-1;
    while(n--)
    {
        if(x-arr[l]>arr[h]-x)
        {
            h++;
        }
        else
        {
            l--;    
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
	subarray=printsubarray(arr, 4, 35);
    printarray(subarray);
	return 0;
}
 