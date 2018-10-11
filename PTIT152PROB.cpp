#include<iostream>
using namespace std;
#include<algorithm>

int main(void)
{
	long N,K,*h;
	cin>>N>>K;
	h = new long[N];
	for(long i=0;i<N;i++)
		cin>>h[i];
	sort(h,h+N);
	long count=0;
	for(long i=1;i<N;i++)
	{
		if(h[i]-h[i-1]>K)
			count++;
	}
	cout<<count+1;
 return 0;
}

