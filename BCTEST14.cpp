#include<stdio.h>
#include<math.h>
int main(void)
{
	long long A,B,V;
	scanf("%lld%lld%lld",&A,&B,&V);
	long long day=(long long)ceil((double)(V-B)/(A-B));
	printf("%lld",day);
	
 return 0;
}

