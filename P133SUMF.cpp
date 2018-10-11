#include<stdio.h>
#include<algorithm>
using namespace std;
int main(void)
{
	int A[3],d,csc;
	scanf("%d%d%d",&A[0],&A[1],&A[2]);
	sort(A,A+3);
	if(A[1]-A[0]>A[2]-A[1])
	{
		csc=A[2]-A[1];
		d=A[0]+csc;
	}
	else if(A[1]-A[0]<A[2]-A[1])
	{
		csc=A[1]-A[0];
		d=A[1]+csc;
	}
	else
	{
		csc=A[1]-A[0];
		d=A[2]+csc;	
	}
	printf("%d",d);
		
		
	
 return 0;
}

