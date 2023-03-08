#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> commonelement(int a[],int b[],int c[],int n1,int n2,int n3)
{
    int i,j,k;
    i=j=k=0;
    vector <int> arr;
   while(i<n1 && j<n2 && k<n3)
   {
       //cout<<"i=="<<i<<" "<<a[i]<<"  j=="<<j<<" "<<b[j]<<"  k=="<<k<<" "<<c[k]<<endl;
       if(a[i]==b[j] && b[j]==c[k])
       {
           arr.push_back(a[i]);
           //cout<<a[i];
           i++;
           j++;
           k++;
       }
       else if(a[i]<b[j])
       {
           i++;
       }
       else if(b[j]<c[k])
       {
           j++;
       }
       else
       {
           k++;
       }
   }
   return arr;
}
int main()
{
    int n1,n2,n3;
    n1=6;
    n2=5;
    n3=8;
    vector <int> arr;
    int a[]={1,5,10,20,80};
    int b[]={6,7,20,80,100};
    int c[]={3,4,15,20,30,70,80,120};
    arr=commonelement(a,b,c,n1,n2,n3);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;   
    }
    return 0;
}