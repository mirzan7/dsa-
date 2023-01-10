#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int d,b,o,t,i=0;
    cin>>d;
    if(d<2)
    {
        b=1;
    }
    else if (d<4)
    {
        b=3;
    }
    else if(d<8)
    {
        b=7;
    }
    else if(d<16)
    {
        b=15;
    }
    else if(d<32)
    {
        b=31;
    }
    o=d^b;
    t=o+1;
    cout<<t<<"\n\n\n";
    return 0;
}