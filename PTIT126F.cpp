#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void)
{
	char Move[100001];
	scanf("%s",Move);
	long n = strlen(Move),count_L = 0, count_R = 0, count_W = 0;
	for(long i=0;i<n;i++)
	{
		if(Move[i]=='L')
			count_L++;
		if(Move[i]=='R')
			count_R++;
		if(Move[i]=='?')
			count_W++;
	}
	long vt = abs(count_L - count_R) + count_W;
	printf("%ld",vt);
 return 0;
}

