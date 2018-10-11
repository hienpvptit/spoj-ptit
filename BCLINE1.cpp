#include<iostream>
using namespace std;

int main(void)
{
	int n,a,b;
	cin>>n>>a>>b;
	int s1 = a + 1;
	int s2 = n - b;
	if(s1<s2)
		s1 = s2;
	cout<<n-s1+1;
	return 0;
}

