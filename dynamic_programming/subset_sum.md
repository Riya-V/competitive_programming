```cpp



#include <iostream>
#include<bits/stdc++.h>

using namespace std;
bool subset(int a[],int n,int sum)
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

return dp[n][sum];

}


int main()
{
int arr[] = { 2, 3, 4, 5, 8 };
	int sum = 21;

	// number of items
	int n = sizeof(arr) / sizeof(arr[0]);

	if (subset(arr, n, sum))
		cout << "Yes";
	else
		cout << "No";
    return 0;
}
```
