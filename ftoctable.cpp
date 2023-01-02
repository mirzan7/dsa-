#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float i=0;
    float c;
    while (i<=100)
    {
        c=((i-32)*5)/9;
        cout<<"f :"<<i<<" c :"<<setprecision(4)<<c<<"\n";
        i++;
    }
    return 0;
}