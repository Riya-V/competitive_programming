
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t,s,a[3],sum=0;
	cin>>t;
	while(t--)
	{   sum=0;
	    cin>>s;
	    for(int i=0;i<3;i++)
	    {cin>>a[i];
	    sum=sum+a[i];
	    }
	    
	    
	    if(s>=sum)
	    cout<<"1"<<endl;
	    else if((a[0]+a[1]<=s )|| (a[2]+a[1]<=s))
	    cout<<"2"<<endl;
	    else 
	    cout<<"3"<<endl;
	}
	    
	    
	    
	    
	
	return 0;
}

```
