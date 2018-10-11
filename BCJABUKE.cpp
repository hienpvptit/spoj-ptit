#include<iostream>
using namespace std;

int main(void)
{
	int N,M;
	cin>>N>>M;
	int J, *A;
	cin>>J;
	A = new int[J];
	for(int i=0;i<J;i++)
		cin>>A[i];
	int head_max = M;
	int head_min = 1;
	int step = 0;
	for(int i=0;i<J;i++)
	{
		if(A[i]>head_max)
		{
			int s = A[i]-head_max;
			step += s;
			head_max = A[i];
			head_min = A[i] - M + 1;
		}
		else if(A[i]<head_min)
		{
			int s = head_min - A[i];
			step += s;
			head_min = A[i];
			head_max = A[i] + M - 1;
		}
		else
			continue;
	}
	cout<<step;
	return 0;
}

