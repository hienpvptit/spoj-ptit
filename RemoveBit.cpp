#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[1000];
	scanf("%s",str);
	int il = strlen(str);
	int k=0;
	while(k<il)
	{
		if(str[k]=='0')
		{
			for(int i=k;i<il-1;i++)
			{
				str[i]=str[i+1];
			}
			str[il-1]='\0';
			printf("%s",str);
			return 0;
		}
		k++;
	}
	str[il-1]='\0';
	printf("%s",str);
 return 0;
}

