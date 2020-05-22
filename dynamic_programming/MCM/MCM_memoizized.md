```cpp
#include <iostream>
#include<bits/stdc++.h>
int static dp[100][100];
using namespace std;
int mcm(int a[],int i,int j)
{
    int min1=INT_MAX;
    if(i>=j)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    for(int k=i;k<=j-1;k++)
    {
     int temp_ans=mcm(a,i,k)+mcm(a,k+1,j)+(a[i-1]*a[k]*a[j]);
     min1=min(min1,temp_ans);
    }
    return dp[i][j]=min1;
}

int main()
{   memset(dp,-1,sizeof(dp));
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
 
   cout<<"MIN COST = "<<mcm(a,1,n-1)<<"\n"; 
  
    
  
    return 0;
}
```
