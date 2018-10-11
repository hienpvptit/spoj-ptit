#include<stdio.h>

int main(void)
{
	int N,A[1000];
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
	int dem=1,max=1;
	for(int i=0;i<N-1;i++)
	{
		int temp=A[i];
		for(int j=i+1;j<N;j++)
		{
			if(temp<A[j])
			{
				dem++;
				temp=A[j];
			}
		}
		if(dem>max)
			max=dem;
		dem=1;
	}
	printf("%d",max);
 return 0;
}

