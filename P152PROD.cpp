#include<stdio.h>
#include<math.h>

struct COOR 
{
	int x,y;
};

int main(void)
{
	struct COOR coor[501];
	struct COOR temp;
	int n,count=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&coor[i].x,&coor[i].y);
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(coor[j].y>coor[j+1].y)
			{
				temp = coor[j];
				coor[j] = coor[j+1];
				coor[j+1] = temp;
			}
		}
	}

	for(int i=1;i<=n;i++)
	{
		if(coor[i].y!=i)
		{
			count = count + abs(coor[i].y-i);
			coor[i].y = i;
		}
	}

	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(coor[j].x>coor[j+1].x)
			{
				temp = coor[j];
				coor[j] = coor[j+1];
				coor[j+1] = temp;
			}
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		if(coor[i].x!=i)
		{
			count = count + abs(coor[i].x-i);
			coor[i].x = i;
		}
	}
	printf("%d",count);
	
 return 0;
}

