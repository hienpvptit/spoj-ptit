#include<stdio.h>

int main(void)
{
 	int a,b,c;
 	scanf("%d%d%d",&a,&b,&c);
 	while(a!=0 || b!=0 || c!=0)
 	{
		long A,B,C;
		A=a*a; B=b*b; C=c*c;
		if(A+B==C || A+C==B || B+C==A)
			printf("right\n");
		else
			printf("wrong\n");
		scanf("%d%d%d",&a,&b,&c);
	}
 return 0;
}

