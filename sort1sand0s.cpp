#include <iostream>
#include <vector>
#include <utility>
using namespace std;
vector<int> sort(vector<int> arr)
{
    int start, end, i;
    start = 0;
    end = arr.size() - 1;
    while (start<=end)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            start++; 
            i++;  
        }
        else
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {0,1,0,1,0,1,0,1,0,1,0,1};
    arr=sort(arr);
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl<< endl;
    return 0;
}