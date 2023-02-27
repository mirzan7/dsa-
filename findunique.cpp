#include <iostream>
#include <vector>
using namespace std;
int unique(vector<int> arr)
{
    int diff=0;
    for (int i = 0; i < arr.size(); i++)
    {
        diff = (diff^arr[i]);
    }
    return diff;
}
int main()
{
    int n;
    cout << "size    :";
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<unique(arr);
    return 0;

}