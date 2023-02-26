#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},j,i,temp=0;
    for(i=0,j=9;i<=5,j>=5;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        cout<<arr[i]<<" "<<arr[j]<<" "<<temp<<endl;
    }
    for(i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}