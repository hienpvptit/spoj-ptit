#include<iostream>
using namespace std;

long Search(long a[],long n)
{
	long max = a[0];
	long vt = 0;
	for(long i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
			vt = i;
		}
	}
	return vt;
}

int main(void)
{
	int T;
	long N, S, *A;
	cin>>T;
	while(T--)
	{
		cin>>N>>S;
		A = new long[N];
		for(long i=0;i<N;i++)
			cin>>A[i];
		long coor = Search(A,N);
		if(A[coor]>=S)
			cout<<1<<endl;
		else
		{
			long i = coor - 1, j = coor + 1, Sum = A[coor], count = 1, kt = 0;
			while(Sum<S && (i>=0 || j<N))
			{
				if(i<0 && j<N)
				{
					Sum+=A[j];
					count++;
					if(Sum>=S)
					{
						kt = 1; break;
					}
					j++;
				}
				if(i>=0 && j>=N)
				{
					Sum+=A[i];
					count++;
					if(Sum>=S)
					{
						kt = 1; break;
					}
					i--;
				}
				if(i>=0 && j<N)
				{
					if(A[i]>A[j])
					{
						Sum+=A[i];
						count++;
						if(Sum>=S)
						{
							kt = 1; break;
						}
						i--;
					}
					else
					{
						Sum+=A[j];
						count++;
						if(Sum>=S)
						{
							kt = 1; break;
						}
						j++;	
					}
				}
				
			}
			if(kt==1)
				cout<<count<<endl;
			else
				cout<<0<<endl;
		}
	}
 return 0;
}

