#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

int x[510],y[510];

int main(void)
{
	int n,count=0;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>y[i];	
	}
	
	sort(x+1,x+n+1);
	sort(y+1,y+n+1);
	
	for(int i=1;i<=n;i++)
	{
		if(x[i]!=i)
		{
			count += abs(i-x[i]);
		}
		if(y[i]!=i)
		{
			count +=abs(i-y[i]);
		}
	}
	cout<<count;
	
 return 0;
}

