#include<iostream>
using namespace std;

int main(void)
{
	int n,T;
	cin>>T;
	while(T--)
	{
		cin>>n;
		if(n==0)
			cout<<"0";
		else if(n==1)
			cout<<"1";
		else if(n==2)
			cout<<"4";
		else if(n==3)
			cout<<"5";
		else
		{
			int Num = 0;
			if(n%2==0)
			{
				for(int i=2;i<=n;i+=2)
					Num += i;
				Num = Num*2 - n;
			}
			else
			{
				for(int i=1;i<=n;i+=2)
					Num += i;
				Num = Num*2 - n;
			}
			cout<<Num;
		}
 		if(T!=0)
 			cout<<"\n";
	}
 return 0;
}

