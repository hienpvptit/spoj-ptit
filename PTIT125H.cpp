#include<iostream>
using namespace std;

int main(void)
{
	int N;
	char str[55];
	cin>>N>>str;
	int count=1;
	for(int i=0;i<N;i++)
	{
		if(str[i]=='S')
			count++;
		if(str[i]=='L')
		{
			count++; i++;
		}
	}
	if(count<N)
		cout<<count;
	else
		cout<<N;
 return 0;
}

