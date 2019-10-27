```cpp

#include<bits/stdc++.h>

int min_steps(int n, int *memo)
{
 if(n==0)
 return 0;
 
 if(memo[n]!=-1)
 return memo[n];
 
 int temp=min(temp,min_steps(n-1,memo));
 
 if(n%2==0)
 temp=min(temp,min_steps(n/2,memo));
 if(n%3==0)
 temp=min(temp,min_steps(n/3,memo));
 
 memo[n]=memo[n]+1;
 
 return memo[n];
 
 }
 
 int get_min(int n)
 {
 int memo[n+1];
 for(int i=0;i<n;i++)
 memo[i]=-1;
 
 return min_steps(n,memo);
 }
 
 void main()
 {
 int n;
 cin>>n;
 cout<<get_min(n);
 }
 
 ```
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
