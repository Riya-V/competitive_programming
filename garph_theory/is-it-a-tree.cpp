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

void dfs(int ver)
{
	vis[ver]=1;
	for(int child:arr[ver])
	{
		//int child=arr[ver][i];
		if(vis[child]==0)
		dfs(child);
	}
}
int main()
{
int n,e;
cin>>n>>e;
memset(vis,0,sizeof(vis));
for(int i=0;i<e;i++)
{
	int a,b;
	cin>>a>>b;
	arr[a].push_back(b);
	arr[b].push_back(a);
}
int cnt=0;
for(int i=1;i<=n;i++)
{
	if(vis[i]==0)
	{
		cnt++;
		dfs(i);
	}
	
}
if(cnt==1 && (n-e)==1)
cout<<"YES";
else
cout<<"NO";

return 0;
}

