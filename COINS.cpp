/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: COINS
DATE: 03-04-2016
*/

#include <cstdio>
#include <map>

using namespace std;

map<long long, long long> MAX;

long long coins(long long n)
{
	if (n == 0) return 0;

	if (MAX[n] != 0) return MAX[n];

	long long temp = coins(n/2)+coins(n/3)+coins(n/4);
	if (temp > n) MAX[n] = temp;
	else MAX[n] = n;

	return MAX[n];
}

int main()
{
	long long n;
	while(scanf("%lld",&n)==1)
		printf("%lld\n",coins(n));
	return 0;
}