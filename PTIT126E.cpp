#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void)
{
	char str[100];
	scanf("%s",str);
	while(str[0]!='#')
	{
		int Y=0,N=0,A=0,n=strlen(str);
		for(int i=0;i<n;i++)
		{
			if(str[i]=='A')
				A++;
			if(str[i]=='Y')
				Y++;
			if(str[i]=='N')
				N++;
		}
		if(A>=ceil((float)n/2))
			printf("need quorum\n");
		else
		{
			if(Y>N)
				printf("yes\n");
			else if(Y<N)
				printf("no\n");
			else
				printf("tie\n");
		}
		scanf("%s",str);
	}
 return 0;
}

