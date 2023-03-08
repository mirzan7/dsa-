#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[7]={1,5,3,4,3,5,6};
    int n;
    n=sizeof(a)/sizeof(int);
    int max;
    max=*max_element(a,a+n);
    int b[max]={0};
    for(int i=0;i<max;i++)
    {
        b[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(b[a[i]]>1)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}
