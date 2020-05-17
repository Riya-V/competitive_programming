```cpp
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void subset(int a[],int n,int sum)
{
    bool dp[n+1][sum+1];


for(int i=1;i<=sum;i++)  //initialisation of base case
{
   
    dp[0][i]=false;
    
    
}
for(int i=0;i<=n;i++)     //initialisation of base case
{
   
    dp[i][0]=true;
    
    
}
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=sum;j++)
    {
        if(a[i-1]<=j)
        {    dp[i][j]=(dp[i-1][j-a[i-1]] ||  dp[i-1][j]);
     
        }
        else
        dp[i][j]=dp[i-1][j];
    }

}
int min1=INT_MAX;
for(int i=0;i<=sum/2;i++)
{
    if(dp[n][i])
    {
        int k=sum-2*i;
        min1=min(min1,k);
    }
}
cout<<"min diff is : "<<min1;

}


int main()
{
    int n,sum=0;
    cin>>n;
    
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    sum+=arr[i];
}

	// number of items
	
	subset(arr,n,sum);
	
    return 0;
}
```
