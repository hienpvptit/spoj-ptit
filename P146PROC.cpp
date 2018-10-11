#include<stdio.h>

int main(void)
{
	long Color[4];
	for(int i=0;i<4;i++)
		scanf("%ld",&Color[i]);
	int Count=0;
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			if(Color[j]==Color[i])
			{
				Count++;
				break;
			}
		}
	}
	printf("%d",Count);
 return 0;
}

