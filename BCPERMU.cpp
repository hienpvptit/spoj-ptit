#include<stdio.h>

int A[10],dem=0,kt=1,n;

void Init()
{
	for(int i=1;i<=n;i++)
		A[i]=i;
}

void Result()
{
	for(int i=1;i<=n;i++)
		printf("%d",A[i]);
}

void Next_Pr()
{
	int j=n-1;
	while(j>0 && A[j]>A[j+1])
		j--;
	if(j>0)
	{
		int k=n;
		while(A[j]>A[k])
			k--;
		int temp=A[j];
		A[j]=A[k];
		A[k]=temp;
		int r=j+1,s=n;
		while(r<=s)
		{
			temp=A[r];
			A[r]=A[s];
			A[s]=temp;
			r++; s--;
		}
	}
	else
		kt=0;
}

int main(void)
{
	scanf("%d",&n);
	Init();
	while(kt)
	{
		Result();
		Next_Pr();
		if(kt!=0)
			printf("\n");
	}

 return 0;
}

