#include<iostream>
using namespace std;

int main(void)
{
	int N;
	cin>>N;
	while(N!=0)
	{
		int temp = N, count = 1;
		while(temp!=1)
		{
			if(temp%2==0)
				temp/=2;
			else
				temp=temp*3+1;
			count++;
		}
		cout<<count<<endl;
		cin>>N;
	}
 return 0;
}

