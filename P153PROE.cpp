#include<stdio.h>

int main(void)
{
	long n;
	scanf("%ld",&n);
	long long Pot[n];
	for(long i=0;i<=n;i++)
		scanf("%ld",&Pot[i]);
	long i=n;
	long long carry = 0, div;
	while(i>0)
	{
		if(Pot[i]%i==0)
		{
			div = Pot[i]/i;
			carry = carry + div; 
			Pot[i-1] += carry;
		}
		else
		{
			printf("No");
			return 0;
		}
		i--;
		
	}
	printf("Yes");
 return 0;
}

