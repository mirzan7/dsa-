#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int i=0,j=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=(5+i);j++)
	    {
	        if(i+j>=5)
	            cout<<"*"<<" ";
	        else
	            cout<<"  ";
		}	
		cout<<"\n";
	}
	return 0;
}