#include<iostream>
#include<string.h>
using namespace std;

long GT[9] = {1,2,6,24,120,720,5040,40320,362880};

int main(void)
{
	int T;
	char str[15];
	cin>>T;
	while(T--)
	{
		cin>>str;
		int n = strlen(str);
		long long Decimal = 0;
		for(int i=0;i<n;i++)
		{
			Decimal += (str[i]-48)*GT[n-i-1];		
		}
		cout<<Decimal;
		if(T!=0)
			cout<<"\n";
	}
 return 0;
}

