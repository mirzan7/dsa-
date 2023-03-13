#include<iostream>
#include<vector>
using namespace std;
int quotient(int divident,int diviser)
{
    int ans,first,mid,last;
    first=0;
    last=abs(divident);
    mid=(first+last)/2;
    while(first<=last)
    {
        if(abs(diviser*mid)==abs(divident))
        {
            ans = mid;
            break;
        }
        if(abs(diviser*mid)<abs(divident))
        {
            ans=mid;
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
        mid=(first+last)/2;
    }
    if((diviser<0 && divident<0) || (diviser>0 && divident>0))
        return ans;
    else
        return -ans;
}
int main()
{
    int divident,diviser,precision;
    double answer;
    cin>>divident>>diviser;
    int ans=quotient(divident,diviser);
    cout<<ans;
    cout<<"\nprecision     ";
    cin>>precision;
    double step=0.1;
    for(int i=0;i<precision;i++)
    {
        for(double j=ans;j*diviser<=divident;j+=step)
        {
            answer=j;

        }
        step/=10;
    }
    cout<<answer<<endl;
    return 0;
}