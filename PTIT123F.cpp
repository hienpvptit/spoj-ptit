#include<stdio.h>

struct JAIL
{
	int status;	
};

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		scanf("%d",&n);
		JAIL Jail[n+1];
		for(int i=1;i<=n;i++)
			Jail[i].status=1;
		for(int i=2;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
				{
					if(j%i==0)
					{
						if(Jail[j].status==0)
							Jail[j].status=1;
						else
							Jail[j].status=0;
					}
				}
		}
		int count=0;
		for(int i=1;i<=n;i++)
			if(Jail[i].status==1)
				count++;
		printf("%d",count);
		if(T!=0)
			printf("\n");
	}
 return 0;
}

