/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: GSS1
DATE: 10-04-2016
*/

#include <cstdio>
#include <vector>
#include <algorithm>

#define MAXN 50000

using namespace std;

struct tree
{
	int total;
	int pre, suf;
	int inv;
}sum[MAXN*4];

int a[MAXN], n, m;

void update(int idx)
{
	sum[idx].total = sum[2*idx].total + sum[2*idx+1].total;
	sum[idx].pre = max(sum[2*idx].pre, sum[2*idx].total + sum[2*idx+1].pre);
	sum[idx].suf = max(sum[2*idx+1].suf, sum[2*idx+1].total + sum[2*idx].suf);
	sum[idx].inv = max(max(sum[2*idx].inv, sum[2*idx+1].inv), sum[2*idx].suf + sum[2*idx+1].pre);
}

void build_tree(int idx, int l, int r)
{
	if (r == l+1)
		sum[idx].total = sum[idx].pre = sum[idx].suf = sum[idx].inv = a[l];
	else
	{
		int m = l + (r-l+1)/2;
		build_tree(2*idx, l, m);
		build_tree(2*idx+1, m, r);
		update(idx);
	}
}

void query_help(vector<int>& list, int idx, int start, int end, int x, int y)
{
	if (x <= start && y >= end)
		list.push_back(idx);
	else
	{
		int mid = start + (end-start+1)/2;

		if (mid > x && y > start)
			query_help(list, 2*idx, start, mid, x, y);
		if (mid < y && end > x)
			query_help(list, 2*idx+1, mid, end, x, y);
	}
}

int query(int x, int y)
{
	vector<int> nodes;
	query_help(nodes, 1, 0, n, x, y);
	int best = -2e9;
	int tsum = -2e9;
	for (int i = 0; i < nodes.size(); ++i)
	{		
		best = max(best, sum[nodes[i]].inv);
		best = max(best, tsum + sum[nodes[i]].pre);
		tsum = max(sum[nodes[i]].suf, tsum + sum[nodes[i]].total);
	}
	return best;
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", a+i);

	build_tree(1, 0, n);

	scanf("%d", &m);
	for (int i = 0; i < m; ++i)
	{
		int x, y;
		scanf("%d%d", &x, &y);
		printf("%d\n", query(x-1,y));
	}
return 0;
}