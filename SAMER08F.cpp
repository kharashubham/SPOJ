/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: SAMER08F - Feynman
DATE: 16-08-2015
*/

#include <iostream>
using namespace std;
int main() 
{
	int n, ans;
	while(cin>>n)
	{   
	    ans = 0;
		if (n > 0)
		{	
			ans = (n*(n+1)*((2*n)+1))/6;
		    cout<<ans<<endl;
		}
		else
			{}
	}
	return 0;
}


