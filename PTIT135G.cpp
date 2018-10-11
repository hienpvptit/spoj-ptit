#include<stdio.h>

int main(void)
{
	int N;
	long M,Card[101],t=0;
	scanf("%d%ld",&N,&M);
	for(int i=0;i<N;i++)
		scanf("%ld",&Card[i]);
	for(int i=0;i<N-1;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			long two=Card[i]+Card[j];
			long temp=M-two;
			if(temp>0)
				for(int k=0;k<N && k!=i && k!=j;k++)
				{
					if(Card[k]==temp)
					{
						printf("%ld",M);
						return 0;
					}
					if(Card[k]+two>t && Card[k]+two<M)
						t=Card[k]+two;
				}
		}
	}
	printf("%ld",t);
 return 0;
}

