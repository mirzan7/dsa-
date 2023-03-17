#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) 
{
    int mid = (left+right) / 2;
    cout<<mid<<"      --mid"<<arr[mid]<<endl;
        if (arr[mid]==x)
        {
            cout<<"i am here\n";
            return mid;
        }
        else if (x<=arr[mid])
        {
            return binarySearch(arr, left, mid-1, x);
        }
        else
        {
            return binarySearch(arr, mid+1, right, x);
        }
    cout<<arr[mid]<<"    near return\n";
    return -1;
}

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(int);
    int x = 10;
    int result = binarySearch(arr, 0, n-1, x);
    cout<<result<<"   ==re";
    if (result == -1)
        cout << "Element not found.";
    else
        cout << "Element found at index " << result << endl;
    return 0;
}