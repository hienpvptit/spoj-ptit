#include<stdio.h>

int main(void)
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int td[n];
		for(int i=0;i<n;i++)
			scanf("%d",&td[i]);
		int max=td[0],min=td[0];
		for(int i=0;i<n;i++)
		{
			if(td[i]>max)
				max=td[i];
			if(td[i]<min)
				min=td[i];
		}
		printf("%d",2*(max-min));
		if(t!=0)
			printf("\n");
	}
 return 0;
}

