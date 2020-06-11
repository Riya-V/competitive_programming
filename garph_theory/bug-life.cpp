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
vector<int> arr[2001];
int col[2001];
int vis[2001];
bool dfs(int ver,int c)
{
	vis[ver]=1;
	col[ver]=c;
	for(int child:arr[ver])
	{
		if(vis[child]==0)
		{
			if(dfs(child,c^1)==false)
			return false;
			
		}
		else
			{
				if(col[ver]==col[child])
				return false;
			}
	}
	return true;
}
int main()
{
int t;
cin>>t;
for(int i=1;i<=t;i++)
{
	int b,s;
	cin>>b>>s;
	
	for(int i=0;i<=b;i++)
	{
	    arr[i].clear();
	}
	memset(vis,0,sizeof(vis));
	
	while(s--)
	{
		int a,b;
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
		
	}
	int p=0;

	for(int j=1;j<=b;j++)
	{
	  if(vis[j]==0)
	  {
	  	if(dfs(j,0)==false)
	  	{
		  
	  
	  	p=1;
	  
		  }	
	}
	
}
	cout<<"Scenario #"<<i<<":"<<"\n";
if(p==1)
cout<<"Suspicious bugs found!"<<"\n";
else
cout<<"No suspicious bugs found!"<<"\n";



}
return 0;
}

