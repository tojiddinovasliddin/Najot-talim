#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int enter()
{
	return rand()%100;
}
void check(int ms[],int n)
{
	int max=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(ms[i]<max)
		{
		max=ms[i];
		}	
	}
	printf("\nMax:%d",max);
}
int main()
{
	int n;
	printf("Elementlar soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);
	}
	check(arr,n);
}
