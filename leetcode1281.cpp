#include<iostream>
#include<math.h>
using namespace std;
int main()
{

        int n=234;
        int number = sizeof(n);
        int a,sum=0,prod=1,i=0;
        cout<<number<<endl;
        while(n>0)
        {
            a=n%10;
            n=n/10;
            sum+=a;
            prod*=a;
            i++;
        }
        cout<<endl;
        cout<<prod-sum<<endl;

}