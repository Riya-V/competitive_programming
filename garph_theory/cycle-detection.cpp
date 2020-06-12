bool dfs(int ver,int parent)
{
	vis[ver]=1;
	
	for(int child:arr[ver])
	{
		if(vis[ver]==0)
		{
			if(dfs(child,ver)==true)
			{
				return true;
				
			}
		}
		else
		{
			if(child!=parent)
			{
				return true;
			}
		}
	}
	return false;
}
