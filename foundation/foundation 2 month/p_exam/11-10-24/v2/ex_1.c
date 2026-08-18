#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
void check(int ms[],int k)
{
	puts("");
	int max=INT_MIN;
	int min=INT_MAX;
	for(int i=0;i<k;i++)
	{
		if(ms[i]>max)
		max=ms[i];
		else if(ms[i]<min)
		min=ms[i];
	}
	printf("Min=%d\n",min);
	printf("Max=%d\n",max);
	printf("Ayilmasi: %d",max-min);
}
int enter()
{
	return rand()%100;
}

int main()
{
	srand(time(0));
	int n;
	printf("N ni kiriting: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=enter();
		printf("%4d",arr[i]);
	}
	check(arr,n);
}

