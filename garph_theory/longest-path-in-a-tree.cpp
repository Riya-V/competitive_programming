/*
emplace_back();

Author: Sourajeet Mohanty
DEVCPP
NO endl only '/n'
*/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <vector>
#include <bitset>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include<bits/stdc++.h>
using namespace std;
vector<int> arr[10001];
int vis[10001];
int dist[10001];
void dfs(int ver,int d)
{
	vis[ver]=1;
	dist[ver]=d;
	for(int child:arr[ver])
	{
		if(vis[child]==0)
		{
			dfs(child,1+d);
		}
	}
}
int main()
{
int n;
cin>>n;
memset(vis,0,sizeof(vis));
for(int i=1;i<=n-1;i++)
{
	int a,b;
	cin>>a>>b;
	arr[a].push_back(b);
	arr[b].push_back(a);
	
}
dfs(1,0);
int max=INT_MIN;
int maxp=0;
for(int i=1;i<=n;i++)
{
	if(max<dist[i])
	{
		max=dist[i];
		maxp=i;
	}
}
memset(vis,0,sizeof(vis));
memset(dist,0,sizeof(dist));
max=INT_MIN;
dfs(maxp,0);
for(int i=1;i<=n;i++)
{
	if(max<dist[i])
	{
		max=dist[i];
		maxp=i;
	}
}
cout<<max;




return 0;
}

