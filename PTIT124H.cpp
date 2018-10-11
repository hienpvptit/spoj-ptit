#include<stdio.h>

int main(void)
{
	int A[3][2],xD,yD,ktx,kty;
	for(int i=0;i<3;i++)
		scanf("%d%d",&A[i][0],&A[i][1]);
	for(int i=0;i<2;i++)
	{
		for(int j=i;j<3;j++)
		{
			if(A[i][0]!=A[j][0] && A[i][1]!=A[j][1])
			{
				ktx=i; kty=j;
			}
		}
	}
	int xtd,ytd;
	xtd=A[ktx][0]+A[kty][0];
	ytd=A[ktx][1]+A[kty][1];
	for(int i=0;i<2;i++)
	{
		if(i!=ktx && i!=kty)
		{
			xD=xtd-A[i][0];
			yD=ytd-A[i][1];
		}
	}
	printf("%d %d",xD,yD);
 return 0;
}

