#include<iostream>
using namespace std;
#include<algorithm>

int main(void)
{
	long N,i,M,*A,t;
	long long T=0,S=0;
	cin>>N>>M;
	A = new long [N+5];
	for(i=1;i<=N;i++)
	{
		cin>>A[i];
		T+=A[i];
	}
	sort(A+1,A+N+1);
	A[0]=0;
	t=N+1;
	long temp;
	for(i=1;i<=N;i++)
	{
		temp = i;
		S+=(A[i]-A[i-1])*(t-i);
		if(T-S<M) 
			break;
	}
	S -= (A[temp]-A[temp-1])*(t-temp);
	long K = (T-S-M)/(t-temp);
	cout<<A[temp-1]+K;
}

