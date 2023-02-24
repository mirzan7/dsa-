#include <iostream>
using namespace std;
int factorial(int num)
{
    int prod=1;
    for(int i=1;i<=num;i++){
        prod*=i;
    }
    return prod;
}
int main()
{
    int num;
    cin >> num;
    cout<<factorial(num);
    return 0;
}