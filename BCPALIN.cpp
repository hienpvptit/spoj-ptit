#include<stdio.h>
#include<string.h>

int daochuoi(char str[])
{
    char c;
    char s[11];
    memset(s,'\0',11);
    strcpy(s,str);
    for(int i=0; i<strlen(s)/2;i++)
    {   
		c=s[i];
        s[i]=s[strlen(s)-1-i];      
        s[strlen(s)-1-i]=c;
    }
    if(strcmp(str,s)==0)
    	return 1;
    return 0;
}

main()
{
	long T;
	char str[11];
	scanf("%ld",&T);
	while(T--)
	{
		memset(str,'\0',11);
		scanf("%s",str);
		if(daochuoi(str))
			printf("YES");
		else
			printf("NO");
		if(T!=0)
			printf("\n");
	}

 return 0;
}

