#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string clacsum(int *a,int *b,int m,int n)
{
    int carry=0;
    string ans;
    int i=m-1;
    int j=n-1;
    while(i>=0 && j>=0)
    {
        int x=a[i]+b[j]+carry;
        int digit=x%10;
        ans.push_back(digit + '0');
        carry=x/10;
        i--;
        j--;
    }
    while(i>=0)
    {
        int x=a[i]+carry;
        int digit=x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        i--;
    }
    while(j>=0)
    {
        int x=b[i]+carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry=x/10;
        j--;
    }
    if(carry)
        ans.push_back(carry + '0');
    while(ans[ans.size()-1]=='0')
    {
        ans.pop_back();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    int a[]={1,2};
    int b[]={2,1};
    int n,m;
    m=2;
    n=2;
    string str=clacsum(a,b,m,n);
    cout<<str;
    return 0;
}
