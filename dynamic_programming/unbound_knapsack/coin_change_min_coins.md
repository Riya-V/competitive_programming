```cpp
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void change(int a[],int n,int sum)
{   
    int dp[n+1][sum+1];
    for(int i=0;i<=sum;i++)
    {
        dp[0][i]=INT_MAX-1;
        
    }
    for(int i=1;i<=n;i++)
    {
        dp[i][0]=0;
    }
    for(int i=1;i<sum+1;i++)
    {
        if(i%a[0]==0)
        {
            dp[1][i]=i/a[0];
        }
        else
        dp[1][i]=INT_MAX-1;
    }
    
    
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(a[i-1]<=j)
            {
                dp[i][j]=min(dp[i][j-a[i-1]]+1,dp[i-1][j]);
            }
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    
    cout<<"min no of coins = "<<dp[n][sum];
}

int main()
{
    int sum,n;
    cin>>n;
    cin>>sum;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    change(a,n,sum);
    return 0;
}
```
