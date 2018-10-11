#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[20];
	scanf("%s",str);
	int n=strlen(str),count=0;
	for(int i=0;i<n;i++)
	{
		if(str[i]=='4' || str[i]=='7')
			count++;
	}
	if(count==4 || count==7)
		printf("YES");
	else
		printf("NO");
	return 0;
}
