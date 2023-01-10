#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int d,b,i=0;
    cin>>d;
    while(d!=0)
    {
        b+=pow(10,i)*(~d&1);
        d=d>>1;
        i++;
    }

    cout<<"\n\n"<<b+1<<"\n\n ";
    return 0;
}