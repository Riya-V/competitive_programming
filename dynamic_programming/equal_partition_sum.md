```cpp


#include <iostream>
#include<bits/stdc++.h>

using namespace std;
bool subset(int a[],int sum,int n)
{
    bool dp[n+1][sum+1];
    for(int i=1;i<=sum;i++)
    {
        dp[0][i]=false;
        
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=true;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(a[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j]|dp[i-1][j-a[i-1]];
            }
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][sum];
}


int main()
{
int n,sum=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
    sum+=a[i];
}
cout<<sum<<endl;
if(sum%2!=0)
{
    cout<<"The partition doesnt exist"<<endl;
}
else
{
    if(subset(a,sum/2,n))
    cout<<"the partition exists"<<endl;
    else
    cout<<"the partiton doesnt exist"<<endl;
}


    return 0;
}
```
