#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int row=0,col=0;
	for(row=0;row<6;row++)
	{
		for(col=0;col<6-row-1;col++)
	    {
	        cout<<" ";
		}	
        for(col=0;col<row;col++)
        {
            if(col==0 || col==row-1)    
                cout<<"* ";
            else
                cout<<"  ";
        }
		cout<<"\n";
	}

    for(row=0;row<5;row++)
	{
		for(col=0;col<row;col++)
	    {
	        cout<<" ";
		}	
        for(col=0;col<5-row;col++)
        {
            if(col==0 || col==5-row-1)    
                cout<<"* ";
            else
                cout<<"  ";
        }
		cout<<"\n";
	}
    
	return 0;
}