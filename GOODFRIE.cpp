#include<iostream>
using namespace std;
#include<cstring>
struct SV{
	string name;
	int l;
};

int main(void)
{
	SV *sv;
	long N,K;
	cin>>N>>K;
	sv = new SV[N];
	for(long i=0;i<N;i++){
		cin>>sv[i].name;
		sv[i].l = sv[i].name.length();
	}
	long count=0;
	for(long i=0;i<N;i++)
	{
		for(long j=i+1;j<=i+K && j<N;j++)
		{
			if(sv[j].l==sv[i].l)
			{
				count++;
			}
		}
	}
	cout<<count;
 return 0;
}

