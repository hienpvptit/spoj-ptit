#include<stdio.h>

int n,x,y;

int mt()
{
	int A[101][101],i=0,j=0,d_colum=0,d_row=1,count=1,row=n,colum=n;
	while(d_colum<=n/2 || d_row<=n/2)
	{
		while(j<colum)
		{
			A[i][j]=count++;	j++;	
		}
		j--; i++;
		if(count>n*n)	break;
		while(i<row)
		{
			A[i][j]=count++;	i++;
		}
		i--; j--;
		if(count>n*n)	break;
		while(j>=d_colum)
		{
			A[i][j]=count++;	j--;
		}
		j++; i--;
		if(count>n*n)	break;
		while(i>=d_row)
		{
			A[i][j]=count++;	i--;
		}
		if(count>n*n)	break;
		i++; j++; row--; colum--; d_colum++; d_row++;
	}
	return A[x-1][y-1];
}


int main(void)
{
	int N;
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d%d%d",&n,&x,&y);
		printf("%d",mt());
		if(N!=0)
			printf("\n");
	}
	
 return 0;
}

