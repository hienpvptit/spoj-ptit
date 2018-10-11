#include<stdio.h>

long long sum[500010];
 
int main()
{
	long n;
	scanf("%ld",&n);
 	for (int i = 1; i <= n; i++)
	{
		long k;
		scanf("%ld",&k);
 		sum[i] = sum[i - 1] + k;
 	}
 	long long tong = 0;
 	if (sum[n] % 3 == 0)
 	{
 		int dem = 0;
 		for (int i = n - 1; i>0; i--)
 		{
 			if (sum[i] == sum[n] / 3)
 			{
 				tong = tong + dem;
 			}
 			if (sum[i] == sum[n] / 3 * 2)
 			{
 				dem++;
 			}
 		}
 }
	printf("%ld",tong);
}
