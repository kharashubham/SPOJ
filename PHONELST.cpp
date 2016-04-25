/*
shubhamkhara | Shubham Chaudhary
PROBLEM: PHONELST
DATE: 25-04-2016
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str[n],out;
		for (int i = 0; i < n; i++)
			cin>>str[i];
		sort(str, str+n);
	
		out = "YES";
		for (int i = 0; i < n-1; i++)
		{
			int len = str[i].size(),k=0;
			for (int j = 0; j < len; j++)
			{	
				if (str[i][j] == str[i+1][j])
				{	
					k++;
					if(k==len)
					{
						out = "NO";
						break;
					}
				}
				else
					break;
			}
		}
		cout<<out<<endl;
	}
	return 0;
}