#include<iostream>
using namespace std;

int main(void)
{
	int n, T1, T2, T3, count = 0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>T1>>T2>>T3;
		int num = 0;
		if(T1==1)
			num++;
		if(T2==1)
			num++;
		if(T3==1)
			num++;
		if(num>=2)
			count++;
	}
	cout<<count;
 return 0;
}

