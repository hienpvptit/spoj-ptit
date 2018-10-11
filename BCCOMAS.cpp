#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[11],Result[20];
	scanf("%s",str);
	memset(Result,'\0',20);
	int k=0;
	for(int i=strlen(str)-1;i>=0;i--)
	{
		Result[k++]=str[i];
		if(k%4==3 && i!=0)
			Result[k++]=',';	
	}
	for(int i=0;i<k/2;i++)
	{
		char temp=Result[i];
		Result[i]=Result[k-1-i];
		Result[k-1-i]=temp;
	}
	printf("%s",Result);
 return 0;
}

