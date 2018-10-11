#include<iostream>
using namespace std;
#include<algorithm>
int main(void)
{
	long N,*R,*D;
	cin>>N;
	R = new long[N];
	D = new long[N];
	for(long i=0;i<N;i++)
		cin>>R[i];
	for(long i=0;i<N;i++)
		cin>>D[i];
	sort(R,R+N); sort(D,D+N);
	long i=0, j=0, count=0;
	while(i<N && j<N)
	{
		while(D[j]<R[i])
			j++;
		if(j<N && i<N)
			if(D[j]>R[i])
			{
				count++;
				j++;
				i++;
			}
	}
	cout<<count;
 return 0;
}

