```cpp
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int lcs(string s1,string s2,int n,int m)
{
    int dp[n+1][m+1];
    memset(dp,-1,sizeof(dp));
    if(n==0 || m==0)
    return 0;
    if(dp[n][m]!=-1)
    return dp[n][m];
    
    if(s1[n-1]==s2[m-1])
    {
        return dp[n][m]=1+lcs(s1,s2,n-1,m-1);
        
    }
    else
    {
        return dp[n][m]=max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
    }
    
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n,m;
    n=s1.length();
    m=s2.length();
    cout<<"longest common subs length = "<<lcs(s1,s2,n,n);
    return 0;
}
```
