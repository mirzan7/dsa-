#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0},i,j;
    for(i=0,j=10-1;i<=5,j>=5;i++,j--){
        cout<<arr[i]<<" "<<arr[j]<<"\n";
    }
    return 0;
}