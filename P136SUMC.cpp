#include<stdio.h>

int dao(int n)
{
	int temp=n,result=0;
	while(temp>0)
	{
		result=result*10+temp%10;
		temp/=10;
	}
	return result;
}

int main(void)
{
 	int A,B;
 	scanf("%d%d",&A,&B);
 	if(dao(A)>dao(B))
 		printf("%d",dao(A));
 	else
 		printf("%d",dao(B));
 	
 return 0;
}

