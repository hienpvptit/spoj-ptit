#include<stdio.h>
#include<string.h>

char Std_Character(char str[])
{
	int n=strlen(str);
	
	for(int i=0;i<n;i++)
	{
		if(str[i]=='A' ||str[i]=='O' ||str[i]=='Y' ||str[i]=='E' ||str[i]=='U' ||str[i]=='I' ||str[i]=='a' ||str[i]=='o' ||str[i]=='y' ||str[i]=='e' ||str[i]=='u' ||str[i]=='i')
		{
			for(int j=i;j<n;j++)
			{
				str[j]=str[j+1];
			}
			str[n-1]='\0';
			n--;
			i--;
		}
		else
		{
			str[n+1]='\0';
			for(int j=n;j>i;j--)
			{
				str[j]=str[j-1];
			}
			str[i]='.';	
			i++;
			n++;
		}
	}
	n--;
	for(int i=0;i<n;i++)
	{
		if(str[i]>=65 && str[i]<=90)
			str[i]+=32;
	}
	
}

int main(void)
{
	char str[101];
	scanf("%s",str);
	Std_Character(str);
	printf("%s",str);	
 return 0;
}

