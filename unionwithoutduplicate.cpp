#include <iostream>
#include <vector>
using namespace std;
void concatinate(vector<int> arr1,vector<int> arr2){
    vector<int> arr3;
    int j=0;
    for(int i=0;i<(arr1.size()+arr2.size());i++)
    {
        if(i>=arr1.size())
        {
            arr3.push_back(arr2[j]);
            j++;
        }
        else{
            arr3.push_back(arr1[i]);
        }
    }
    for(int i=0;i<arr3.size();i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}
vector<int> intersection(vector<int> arr1, vector<int> arr2)
{
    vector<int> arr3;
    int count=0;
    for (int i = 0; i < arr1.size(); i++)
    {
        count=0;
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr2[j] == arr1[i])
            {
                count++;
               /* if(arr2[j]!=INT8_MIN)
                    arr3.push_back(arr1[i]);
                arr2[j] = INT8_MIN;*/
            }
        }
        if(count==0)
            arr3.push_back(arr1[i]);
    }
    return arr3;
}
int main()
{
    vector<int> arr1, arr2, arr3;
    arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    arr2 = {1, 3, 5, 7, 9};
    arr3 = intersection(arr1, arr2);
    concatinate(arr2,arr3);
  /*  for (int i = 0; i < arr3.size(); i++)
    {
        cout << arr3[i] << " ";
    }*/
    cout << endl;
    return 0;
}