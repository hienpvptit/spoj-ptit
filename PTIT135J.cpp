#include<stdio.h>

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		double N,L,M;
		long year=0;
		scanf("%lf%lf%lf",&N,&L,&M);
		while(N<M)
		{
			N+=N*(L/100);
			year++;
		}
		printf("%ld",year);
		if(T!=0)
			printf("\n");
	}
 return 0;
}

