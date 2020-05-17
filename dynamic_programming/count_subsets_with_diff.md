```cpp
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void subset(int a[],int n,int sum)
{
    int dp[n+1][sum+1];


for(int i=1;i<=sum;i++)  //initialisation of base case
{
   
    dp[0][i]=0;
    
    
}
for(int i=0;i<=n;i++)     //initialisation of base case
{
   
    dp[i][0]=1;
    
    
}
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=sum;j++)
    {
        if(a[i-1]<=j)
        {    dp[i][j]=(dp[i-1][j-a[i-1]] +  dp[i-1][j]);
     
        }
        else
        dp[i][j]=dp[i-1][j];
    }
    

}
cout<<"count of subsets= "<<dp[n][sum];

}


int main()
{
    int n,diff,sum=0;
    cin>>n>>diff;
    
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    sum+=arr[i];
}
//let s1 and s2 be two subsets,then sum of s1=i/2*(diff+sum);
	// number of items
	int k=(diff+sum)/2;
	subset(arr,n,k);
	
    return 0;
}
```
