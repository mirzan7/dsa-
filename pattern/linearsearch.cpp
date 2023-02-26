#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,5,9,8,7,3,4,6,2,0};
    int key;
    cin>>key;
    for(int i=0;i<10;i++){
        if(arr[i]==key)
            cout<<"found @"<<i+1;
    }
    return 0;
}