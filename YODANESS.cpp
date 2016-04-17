/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: YODANESS
DATE: 18-04-2016
*/

#include <iostream>
#include <bitset>
#include <cstdio>
#include <map>
#include <algorithm>
#include <vector>
#include <cstring>

#define MOD 1000000007
#define ll long long
#define MAXN 200000

using namespace std;

ll BIT[10000007], maxo;

map<string, ll> yodaness;

ll query(ll idx)
{
	ll s=0;
	while (idx > 0)
	{
		s += BIT[idx];
		idx -= (idx&(-idx));
	}
	return s;
}

void update(ll idx)
{
	while (idx <= maxo)
	{
		BIT[idx]++;
		idx += (idx&(-idx));
	}
}

int main()
{
	ll t, n, ans, c;
	scanf("%lld\n",&t);
	while(t--)
	{
		memset(BIT,0,sizeof(BIT));
		ans = 0;
		scanf("\n%lld",&n);
		maxo = n;
		ll arr[n];
		string yoda[n], norm;
		c = 1;
		for (ll i = 0; i < n; i++)
			cin>>yoda[i];
		for (ll i = 0; i < n; i++)
		{	
			cin>>norm;
			yodaness[norm] = c;
			c++;
		}	
		for (ll i = 0; i < n; i++)
			arr[i] = yodaness[yoda[i]];
		for (ll i = n-1; i >= 0; i--)
		{	
			ans += query(arr[i]-1);
			update(arr[i]);
		}
		
		printf("%lld\n",ans);
		
	}
	return 0;
} 
