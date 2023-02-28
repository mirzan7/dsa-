#include <iostream>
#include <vector>
#include <utility>
using namespace std;
vector<int> sort(vector<int> arr)
{
    int zero,one,two;
    zero=one=two=0;
    vector<int> arr1;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]==1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    int i=0;
    while(zero--)
    {
        arr[i]=0;
        i++;
    }
    while (one--)
    {
        arr[i] = 0;
        i++;
    }
    while (two--)
    {
        arr[i] = 0;
        i++;
    }
    return arr1;
}
int main()
{
    vector<int> arr = {2,0,2,1,1,0};
    arr = sort(arr);
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
    return 0;
}