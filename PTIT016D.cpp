#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
	long n,k;
	long long Sum = 0,A[100010];
	cin>>n>>k;
	for(long i=0;i<n;i++)
	{
		cin>>A[i];
		Sum+=A[i];
	}
	sort(A + 1, A + n);
	long long carry=0;
	for(long i=1;i<n-k;i++)
	{
		carry+=A[i];
	}
    cout << Sum-2*carry;
 return 0;
}

