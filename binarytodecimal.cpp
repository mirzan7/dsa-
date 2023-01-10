#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int bit,digit,i=0;
    cin>>bit;
    while(bit!=0)
    {
        digit+=(bit%10)*pow(2,i);
        bit/=10;
        i++;
    }
    cout<<"\n\n"<<digit<<"\n\n";
    return 0;
}