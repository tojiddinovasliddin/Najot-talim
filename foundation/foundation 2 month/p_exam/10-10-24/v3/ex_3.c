#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
int enter()
{
return rand()%100;
}
int max(int ms[], int k)
{
	int max=INT_MIN;
	for(int i=0;i<k;i++)
	{
		if(ms[i]>max)
		max=ms[i];

	}
	return max;
}
int min(int ms[],int k)
{
	int min=INT_MAX;
	for(int i=0;i<k;i++)
	{
		if(ms[i]<min)
		min=ms[i];
	}
	return min;
}

int main()
{
	srand(time(0));
	int n;
	printf("Elelemntalr soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=enter();
		printf("%4d",arr[i]);
	}
	printf("\nMax= %d\n",max(arr,n));
	printf("Min=%d",min(arr,n));
}
