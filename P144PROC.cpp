#include<stdio.h>
#include<math.h>
long const du = 1000000007 ;

long Result(long a,long b)
{
	if(b==0)
		return 1;
	if(a==0)
		return 0;
	return ((int)pow(a,b)%du);
}

int main(void)
{
 	long a,b;
	scanf("%ld%ld",&a,&b); 	
	while(a!=0 || a!=0)
 	{
 		printf("%ld",Result(a,b));
 		printf("\n");
 		scanf("%ld%ld",&a,&b);
	 }
 return 0;
}

