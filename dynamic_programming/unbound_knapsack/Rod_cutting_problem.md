```cpp
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void rod(int a[],int p[],int l,int n)
{
    int dp[n+1][l+1];
    for(int i=1;i<=l;i++)
    {
        dp[0][i]=0;
        
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=l;j++)
        {
            if(a[i-1]<=j)
            {
                dp[i][j]=max(p[i-1]+dp[i][j-a[i-1]],dp[i-1][j]);
            }
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    cout<<"the max profit is = "<<dp[n][l];
}

int main()
{
    int n,l;
    cout<<"enter Reqd. length"<<endl;
    cin>>l;
    
    cout<<"enter the length of the array"<<endl;
    cin>>n;
    int a[n],p[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter price array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<endl;
    rod(a,p,l,n);
    return 0;
}
```
