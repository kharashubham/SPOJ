/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: ACPC10A - What's Next
DATE: 16-08-2015
*/

#include <iostream>
using namespace std;

int main() 
{
	int a1, a2, a3;
	while(cin>>a1>>a2>>a3)
	{
		if( (a1 == 0) && ((a1 == a2) && (a2 == a3)) )
			{continue;}
		if ((a2-a1) == (a3-a2))
			cout<<"AP "<<a3+(a3-a2)<<endl;
		else
		if (((a2/a1) == (a3/a2)) || ((a1 == a2) && (a2 == a3)))	
	        cout<<"GP "<<a3*(a2/a1)<<endl;
	}
	return 0;
}