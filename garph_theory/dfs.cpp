```
void dfs(int ver)
{
vis[ver]=1;
  for(int i=0;i<arr.size();i++)
  {
  int child=arr[ver][i];
    if(vis[child]==0)
    {
    dfs(child);
    }
  }
}
