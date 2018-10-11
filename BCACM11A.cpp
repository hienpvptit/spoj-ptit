#include<stdio.h>

int main(void)
{
	long max3=900,max2=180,max1=145;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long N,M,K;
		scanf("%ld%ld%ld",&N,&M,&K);
		if(N<=145)
		{
			if(M<=180-N)
			{
				if(K<=900-M-N)
					printf("YES");
				else
					printf("NO");
			}
			else
				printf("NO");
		}
		else
			printf("NO");
		
		if(T!=0)
			printf("\n");
	}
	
 return 0;
}

