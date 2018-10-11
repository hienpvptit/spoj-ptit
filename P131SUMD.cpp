#include<iostream>
#include<string.h>
using namespace std;

char str1[10],str2[10];

int main(void)
{
	
	scanf("%s%s",str1,str2);
	int l1 = strlen(str1), l2 = strlen(str2);
	long intStr1Min = 0, intStr2Min = 0,intStr1Max = 0, intStr2Max = 0;
	for(int i=0;i<l1;i++)
	{
		if(str1[i]=='5')
			str1[i]='6';
		intStr1Max=intStr1Max*10+str1[i]-48;
		
		if(str1[i]=='6')
			str1[i]='5';
		intStr1Min=intStr1Min*10+str1[i]-48;
	}
	
	for(int i=0;i<l2;i++)
	{
		if(str2[i]=='5')
			str2[i]='6';			
		intStr2Max=intStr2Max*10+str2[i]-48;
		
		if(str2[i]=='6')
			str2[i]='5';			
		intStr2Min=intStr2Min*10+str2[i]-48;
	}
	
	cout<<intStr1Min+intStr2Min<<" "<<intStr1Max+intStr2Max;
 return 0;
}

