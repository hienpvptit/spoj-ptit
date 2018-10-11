#include<stdio.h>

struct cap
{
	char Name[16];
	int Day,Month,Year;
};

int main(void)
{
	struct cap CAP[100];
	struct cap temp;
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%s%d%d%d",&CAP[i].Name,&CAP[i].Day,&CAP[i].Month,&CAP[i].Year);
	for(int i=0;i<N-1;i++)
	{
		for(int j=0;j<N-1;j++)
		{
			if(CAP[j].Year>CAP[j+1].Year)
			{
				temp = CAP[j];
				CAP[j] = CAP[j+1];
				CAP[j+1] = temp;
			}
		}
	}
	
	for(int i=0;i<N-1;i++)
	{
		for(int j=0;j<N-1;j++)
		{
			if(CAP[j].Month>CAP[j+1].Month && CAP[j].Year==CAP[j+1].Year)
			{
				temp = CAP[j];
				CAP[j] = CAP[j+1];
				CAP[j+1] = temp;
			}
		}
	}
	
	for(int i=0;i<N-1;i++)
	{
		for(int j=0;j<N-1;j++)
		{
			if(CAP[j].Day>CAP[j+1].Day && CAP[j].Year==CAP[j+1].Year && CAP[j].Month==CAP[j+1].Month)
			{
				temp = CAP[j];
				CAP[j] = CAP[j+1];
				CAP[j+1] = temp;
			}
		}
	}
	printf("%s\n%s",CAP[N-1].Name,CAP[0].Name);
 return 0;
}

