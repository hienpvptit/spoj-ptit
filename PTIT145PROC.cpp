#include<iostream>
using namespace std;
#include<algorithm>

int main(void)
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
		arr[i]=arr[i]%42;
	}
	sort(arr,arr+10);
	int count = 1;
	for(int i=1;i<10;i++)
	{
		if(arr[i]!=arr[i-1])
			count++;
	}
	cout<<count;
 return 0;
}

