```cpp
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
bool is_palindrome(string s,int i,int j)
{
    string t1=s.substr(i, j);
    string t2=t1;
    reverse(t2.begin(),t2.end());
    if(t2==t1)
    return true;
    else
    return false;
}
int mcm(string s,int i,int j)
{int min1=INT_MAX;
    if(i>=j)
    return 0;
    if(is_palindrome(s,i,j))
    return 0;
    for(int k=i;k<=j-1;k++)
    {
        int temp_ans=mcm(s,i,k)+mcm(s,k+1,j)+1;
        min1=min(temp_ans,min1);
    }
    return min1;
}
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    cout<<"the no of partitions = "<<mcm(s,0,n-1);
    
    
}
```
