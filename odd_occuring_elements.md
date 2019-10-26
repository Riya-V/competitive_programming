```cpp
#include<bits/stdc++>

void main()
{

vector<int> a;

cout<<"enter the array length"<<endl;
cin>>n;
cout<<"enter the array elements"<<endl;
for(int i=0;i<n;i++)
{
   cin>>a[i];
   }
   
   int res=0;
   for(i=0;i<n;i++)
   {
   res=res^a[0];
   }
   
   
   cout<<"the odd occuring element is "<<res;
   
   }
   ```
   
   
  
