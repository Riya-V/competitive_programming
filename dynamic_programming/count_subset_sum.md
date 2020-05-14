```cpp


#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int subset(int a[],int sum,int n)
{
    int  dp[n+1][sum+1];
    for(int i=1;i<=sum;i++)
    {
        dp[0][i]=0;
        
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(a[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j]+dp[i-1][j-a[i-1]];
            }
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][sum];
}


int main()
{
int n,sum;
cin>>n>>sum;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
   
}

    int k=subset(a,sum,n);
    cout<<k<<endl;
    


    return 0;
}

```
