#include<stdio.h>
#include<string.h>

int main(void)
{
	int m,s;
	scanf("%d%d",&m,&s);
	
	if(m==1 && s==0)
	{
		printf("0 0");
		return 0;
	}
	if(s>9*m || s==0)
	{
		printf("-1 -1");
		return 0;
	}
	
	int max[100],min[100];
	for(int i=0;i<m;i++)
	{
		max[i] = 0;
		min[i] = 0;
	}
	//** max **//
	int scs = s/9;
	int du = s - scs*9;
	for(int i=0;i<scs;i++)
		max[i] = 9;
	if(scs<m && du!=0)
		max[scs] = du;
	//** max **//
	for(int i=0;i<m;i++)
		min[i] = max[m-1-i];
	if(min[0]==0)
	{
		min[0]=1;
		for(int i=1;i<m;i++)
			if(min[i]!=0)
			{
				min[i]-=1;
				break;
			}
	}
	// *** Min **//
	for(int i=0;i<m;i++)
		printf("%d",min[i]);
	printf(" ");
	for(int i=0;i<m;i++)
		printf("%d",max[i]);
 return 0;
}

