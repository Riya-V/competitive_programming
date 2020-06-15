//This is The Coding Area
/*
emplace_back();

Author: Sourajeet Mohanty
DEVCPP
NO endl only '/n'
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> arr[100001];
int visit[10001];
int dist[10001];
int bfs(int ver)
{   queue<int> q;
    q.push(ver);
	visit[ver]=1;
	dist[ver]=0;
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(int child:arr[curr])
		{
			if(visit[child]==0)
			{
				q.push(child);
				dist[child]=dist[curr]+1;
				visit[child]=1;
			}
		}
	}
}
int main()
{
int t;
cin>>t;
while(t--)
{
	int n;
	int m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		arr[i].clear();
		visit[i]=0;
		dist[i]=0;
	}
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
		
	}
	bfs(1);
	cout<<dist[n]<<"\n";
}
return 0;
}

