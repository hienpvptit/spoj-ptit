#include<stdio.h>
#include<string.h>
int main(void)
{
	int P,N;
	char str[41],check[4];
	char Tail[8][4]={{"TTT"},{"TTH"},{"THT"},{"THH"},{"HTT"},{"HTH"},{"HHT"},{"HHH"}};
	int count[8];
	scanf("%d",&P);
	while(P--)
	{
		scanf("%d%s",&N,str);
		for(int i=0;i<8;i++)
			count[i]=0;
		for(int i=0;i<38;i++)
		{
			memset(check,'\0',4);
			memcpy(check,str+i,3);
			for(int j=0;j<8;j++)
				if(strcmp(check,Tail[j])==0)
				{
					count[j]++;
					break;
				}
		}
		printf("%d ",N);
		for(int j=0;j<8;j++)
		{
			printf("%d",count[j]);
			if(j!=7)
				printf(" ");
		}
		if(P!=0)
			printf("\n");
	}	
	
 return 0;
}

