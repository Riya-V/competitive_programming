factorial of a large numbers
```cpp
#include<bits/stdc++.h>
#define max 500
int main()
{
int n;
cin>>n;
}


void factorial(int n)

{
int res[max];

int res_size=1;

res[0]=1;

for(int i=0;i<res_size;i++)
{
res_size=multiply(res[i],res[],res_size);
}

for(int i=res_size-1;i>=0;i--)
{
cout<<res[i];
}

}

void multiply(int x,int res[];int res_size)
{
int carry=0;

for(int i=0;i<res_size-1;i++)
{
int prod = res[i]*x + carry;

res[i]=prod%10;

carry=prod/10;
}

while (carry) 
	{ 
		res[res_size] = carry%10; 
		carry = carry/10; 
		res_size++; 
	} 
	return res_size; 
} 
```
