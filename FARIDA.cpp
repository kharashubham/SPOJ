/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: FARIDA
DATE: 05-04-2016
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;


int main() {
	long long counter=1;
	long long i, ar[100001],dp[100001], t, n, a=0;;
	scanf("%lld",&t);
	while(t--)
	{
		memset(ar,0,sizeof(ar));
		scanf("%lld",&n);
		if(n==0)
		{
		cout<<"Case "<<counter<<": "<<a<<"\n";
		counter++;
		continue;
		}
		for(i=0;i<n;i++)
		{
			scanf("%lld",&ar[i]);
		}
		for(i=0;i<n;i++)
		{
			dp[i]= max(i>0?dp[i-1]:a,(i>1?dp[i-2]:a) + ar[i]);
		}
		cout<<"Case "<<counter<<": "<<dp[n-1]<<"\n";
	counter++;
	memset(ar,0,sizeof(ar));
	}
		
	
	return 0;
}