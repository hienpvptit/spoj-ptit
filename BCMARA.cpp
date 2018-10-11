#include<stdio.h>

struct COW
{
	int gio,phut,giay;
};

int main(void)
{
	struct COW cow[5001];
	struct COW temp;
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%d%d%d",&cow[i].gio,&cow[i].phut,&cow[i].giay);
	for(int i=0;i<N-1;i++)
	{
		for(int j=0;j<N-1;j++)
		{
			if(cow[j].gio>cow[j+1].gio)
			{
				temp=cow[j];
				cow[j]=cow[j+1];
				cow[j+1]=temp;
			}	
		}
	}
	
	for(int i=0;i<N-1;i++)
	{
		for(int j=0;j<N-1;j++)
		{
			if(cow[j].phut>cow[j+1].phut && cow[j].gio==cow[j+1].gio)
			{
				temp=cow[j];
				cow[j]=cow[j+1];
				cow[j+1]=temp;
			}	
		}
	}
	
	for(int i=0;i<N-1;i++)
	{
		for(int j=0;j<N-1;j++)
		{
			if(cow[j].giay>cow[j+1].giay && cow[j].gio==cow[j+1].gio && cow[j].phut==cow[j+1].phut)
			{
				temp=cow[j];
				cow[j]=cow[j+1];
				cow[j+1]=temp;
			}	
		}
	}
	
	for(int i=0;i<N;i++)
	{
		printf("%d %d %d",cow[i].gio,cow[i].phut,cow[i].giay);
 		if(i!=N-1)
 			printf("\n");
	 }
 return 0;
}

