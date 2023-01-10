// C++ code to implement above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the complement
int findComplement(int num)
{
	int ans = 0;
	for (int i = 0; num >0; i++) {
		ans += pow(2, i) * (!(num % 2));
		cout<<"ans "<<ans<<"  i "<<i<<" "<<pow(2,i)<<"  num%2 "<<(num%2)<<"   ! "<<!(num%2)<<endl;
		num /= 2;
	}
	cout<<"\n\n\n";
	return ans;
}

// Driver code
int main()
{
	unsigned int N = 0;
	cout << findComplement(N);
	return 0;
}
