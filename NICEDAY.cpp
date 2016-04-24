/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: NICEDAY
DATE: 25-04-2016
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
#define MAXN 100001

using namespace std;

ll BIT[MAXN], maxo;

struct result
{
	ll a, b, c;
};

bool compare(result &x, result &y)
{
	return x.a == y.a ? (x.b == y.b ? (x.c < y.c) : x.b < y.b) : x.a < y.a;
}

ll query(ll idx)
{
	ll s=MAXN;
	while (idx)
	{
		s = min(BIT[idx], s);
		idx -= (idx&(-idx));
	}
	return s;
}

void update(ll idx, ll val)
{
	while (idx <= MAXN)
	{
		BIT[idx] = min(BIT[idx], val);
		idx += (idx&(-idx));
	}
}

int main()
{
	int t;
	ll n, ans, counter, temp;
	scanf("%d",&t);
	while(t--)
	{
		counter = 0;
		for (ll i = 0; i < MAXN; i++)
		BIT[i] = MAXN;
		
		scanf("%lld",&n);
		result arr[n];
		for (ll i = 0; i < n; i++)
			scanf("%lld%lld%lld",&arr[i].a,&arr[i].b,&arr[i].c);
		sort(arr, arr+n, compare);
		for (ll i = 0; i < n; i++)
		{
			temp = query(arr[i].b);
			if(temp > arr[i].c)
				counter++;
			update(arr[i].b, arr[i].c);
		}
		printf("%lld\n",counter);
		
	}
	return 0;
} 