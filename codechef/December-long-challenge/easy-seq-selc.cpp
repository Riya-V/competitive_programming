https://www.codechef.com/DEC19B/problems/SUBSPLAY

```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  unordered_map<char,int> p;
  int n;
  cin>>n;
  string s;
  cin>>s;
  long long int min=100000000,c;
  for(int i=0;i<n;i++){
  	if(p.find(s[i])!=p.end()){
  		c=i-p[s[i]];
  		if(c<min)
  			min=c;
  	}
  	p[s[i]]=i;
  }
  if(min==100000000){
    cout<<0<<endl;
    continue;
  }
  cout<<n-min<<endl;
  }
  return 0;
}
```
