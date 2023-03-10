//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
        int ans;
        while(n>0)
        {
            int digit=n%10;
            if(digit==0)
            {
                digit=5;
                ans=ans*10+digit;
            }
            else
            {
                ans=ans*10+digit;
            }
            n/=10;
        }
        int rev_num=0;
        while (ans > 0) 
        {
            rev_num = rev_num * 10 + ans % 10;
            ans = ans / 10;
        }
        return (rev_num);
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends