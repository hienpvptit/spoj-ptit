#include<stdio.h>

int main(void)
{
	int A,B,C;
	scanf("%d%d%d",&A,&B,&C);
	if(B-A<C-B)
		printf("%d",C-B-1);
 	else
 		printf("%d",B-A-1);
 return 0;
}

