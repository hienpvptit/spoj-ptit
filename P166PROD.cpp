#include<iostream>
using namespace std;
#include<algorithm>
int main(void)
{
	long n,m,k;
	cin>>n>>m>>k;
   	long t = 1;
   	long long *A;
   	A = new long long[m*n+5];
   	for(long i=1;i<=n;i++)
   	{
		for(long j=1;j<=m;j++)
  			A[t++] = i*j;
	}
	sort(A+1,A+m*n+1);
	cout<<A[k];
 return 0;
}

