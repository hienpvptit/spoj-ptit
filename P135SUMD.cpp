#include<iostream>
using namespace std;

int main(void)
{
	long K;
	cin>>K;
	long H = K-1;
	H |= H>>1;
	H |= H>>2;
	H |= H>>4;
	H |= H>>8;
	H |= H>>16;
	H++;
	cout<<H<<" ";
	int count = 0;
	if(K<H)
	{
		int gif = 0;
		while(gif!=K)
		{
			gif += H/2;
			if(gif>K)
				gif-= H/2;
			H /= 2;
			count++;
		}
	}
	cout<<count;
 return 0;
}

