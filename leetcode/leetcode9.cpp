#include<iostream>
using namespace std;
int main()
{
    int num = 0, x;
    x = 525;
    if (x < 0)
    {
        cout<<"1.false\n";
    }
    if (x != 0 && x % 10 == 0)
    {
        cout<<"2.false\n";
    }
    while (x > num)
    {
        num = (num * 10) + (x % 10);
        x = x / 10;
    }
    if (x == num)
    {
        cout<<"3.true\n";
    }
    if (x == num / 10)
    {
        cout<<"x=="<<x<<endl;
        cout<<"num =="<<num<<endl;
        cout<<"4.true\n";
    }
    if(x != num)
    {
        cout<<"5.false\n";
    }
    return 0;
}