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
int level[100001];
void bfs(int ver)
{    queue<int> q;
    visit[ver]=1;
    q.push(ver);
    dist[ver]=0;
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();

    for(int child:arr[curr])
    {
        if(visit[child]==0)
        {
            dist[child]=dist[curr]+1;
            q.push(child);
            visit[child]=1;
            level[dist[child]]++;

        }
    }
    }
}
int main()
{
int n,e;
cin>>n>>e;
while(e--)
{
    int a,b;
    cin>>a>>b;
    arr[a].push_back(b);
    arr[b].push_back(a);
}
int m;
cin>>m;
while(m--)
{
int src,d;
cin>>src>>d;
memset(level,0,sizeof(level));
memset(visit,0,sizeof(visit));
bfs(src);

cout<<level[d]<<"\n";

}
return 0;
}

