#include<stdio.h>
#include<math.h>

int NT(long n)
{
	if(n<2)
		return 0;
	for(long h=2;h<=sqrt(n);h++)
		if(n%h==0)
			return 0;
	return 1;
}

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long n,count=0;
		scanf("%ld",&n);
		if(NT(n))
			count++;
		int s=0;
		for(int i=2;i<=n/2;i++)
		{
			s=0;
			if(NT(i))
			{
				for(int j=i;j<=n;j++)
				{
					if(NT(j))
					{
						s+=j;
						if(s==n)
							count++;
						if(s>n)
							break;
					}
				}
			}
		}
		printf("%ld",count);
 		if(T!=0)
 			printf("\n");
	 }
 return 0;
}

