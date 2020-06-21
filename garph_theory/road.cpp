/*
emplace_back();

Author: Sourajeet Mohanty
DEVCPP
NO endl only '/n'
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> arr[100001];
int visit[100001];
int in[100001];
int low[100001];
int timer;
bool flag;
vector<pair<int,int>> res;
//int res[100001][100001];
void dfs(int ver, int par)
{
	visit[ver]=1;
	in[ver]=low[ver]=timer;
	timer++;
	for(int child:arr[ver])
	{
		if(child==par)
		continue;
		if(visit[child]==1)
		{
			low[ver]=min(low[ver],in[child]);
			if(in[ver]>in[child])
			res.push_back(make_pair(ver,child));
		}
		else
		{
			dfs(child,ver);
			if(in[ver]<low[child])
		{
				flag=false;
				return ;
			}
		
				res.push_back(make_pair(ver,child));
			
			low[ver]=min(low[ver],low[child]);
		}
	}
}
int main()
{
int n,m;
cin>>n>>m;
while(m--)
{
	int a,b;
	cin>>a>>b;
	arr[a].push_back(b);
    arr[b].push_back(a); 
}
dfs(1,-1);
if(flag==false)
cout<<"0";

for(pair<int,int> itr: res)
{
	cout<<itr.first<<" "<<itr.second<<"\n";
}
return 0;
}

