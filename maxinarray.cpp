#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,5,2,4,3,6,8,9,7,0};
    int max=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<max;
    return 0;

}