#include<stdio.h>

int main(void)
{
	int chia[14]={4,7,44,47,74,77,444,447,474,744,477,747,774,777};
	int N;
	scanf("%d",&N);
	for(int i=0;i<14;i++)
	{
		if(N%chia[i]==0)
		{
			printf("YES");	
			return 0;
		}
	}
	printf("NO");
 return 0;
}

