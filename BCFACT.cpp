#include<stdio.h>

long long GT(int n)
{
	if(n==1)
		return 1;
	else
		return n*GT(n-1);
}

main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		printf("%lld\n",GT(n));
		scanf("%d",&n);
	}
	return 0;
}

