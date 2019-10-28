```cpp

#include<bits/stdc++.h>



int calc(string s,int n)
{

int lis[n];
int lis[0]=1;

for(int i=1;i<n;i++)
{
lis[i]=1;
for(int j=0;j<i;j++)
if(a[i]==a[j] && lis[i]<lis[j]+1)
lis[i]=lis[j]+1;
}
return *max_element(lis,lis+n);
}
#define max 100000;
void main()
{
string s;
cin>>s;
int n=strlen(s);
cout<<calc(s,n);
}
