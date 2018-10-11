#include<iostream>
#include<math.h>
using namespace std;

int main(void)
{
	long n;
	long *snt;
	cin>>n;
	while(n!=0)
	{
		snt = new long[2*n+1];
		snt[0]=0;
		long i,j;
    	for(i=1; i<=2*n; i++)
        	snt[i]=1;
    	snt[1]=0;
    	i=2;
    	while (i<=sqrt(2*n))
    	{
        	while (snt[i]==0)
        	    i++;
        	for (j=2; j<=2*n/i; j++)
        	    snt[i*j]=0;
        	i++;
    	}
    	int d[2*n+1],count=0;
		for (int i=0; i<=2*n; i++)
 		{
			if (snt[i])
 			{
				count++;	
			}
			d[i]=count;
		}
		cout<<d[2*n]-d[n]<<endl;
		cin>>n;
	} 	
 return 0;
}

