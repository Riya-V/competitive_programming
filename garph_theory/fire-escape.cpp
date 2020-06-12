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

using namespace std;
vector<int> arr[100001];
int vis[100001];
int nodes;
void dfs(int ver)
{
	vis[ver]=1;
    nodes++;
	for(int child:arr[ver])
	{
		if(vis[child]==0)
		{	
			dfs(child);
		}
	}
	

}
int main()
{
int t;
cin>>t;
while(t--)
{
	int n,r;
	cin>>n>>r;
	memset(vis,0,sizeof(vis));

	for(int i=1;i<=n;i++)
	{
		arr[i].clear();
	}
	for(int i=1;i<=r;i++)
	{
		int a,b;
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
		
	}
	int cnt=0;
	long long int ml=pow(10,9)+7;
	long long int caps=1;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{  	nodes=0;
			dfs(i);
			cnt++;
			caps=(caps*nodes)%ml;
		
		}
	
	}

	
	
	cout<<cnt<<" "<<caps<<"\n";
	cnt=0;
	caps=1;
	
}


return 0;
}

