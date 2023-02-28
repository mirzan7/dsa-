// C++ code to implement above approach
#include <bits/stdc++.h>
using namespace std;
// Function to find the complement
int findComplement(int num)
{
	int ans=0,i=0;
	if(num ==0)
		return 1;
	else
	{
		for(i=0;num>=0;i++)
		{
			ans = ans+pow(2,i)*(!(num%2));
			num = num/2;
		}
		cout<<"\n\n\n";
		return ans;
	}
}
// Driver code
int main()
{
	int N = 5;
	cout <<"compliment   :"<< findComplement(N)<<endl<<endl;
	return 0;
}
