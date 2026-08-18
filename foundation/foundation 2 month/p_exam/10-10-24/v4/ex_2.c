#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
int enter()
{
	return rand()%100;
}
void check(int ms[],int k)
{
	int max=INT_MIN;
	for(int i=0;i<k;i++)
	{
		if(ms[i]>max)
		max=ms[i];
	}
	printf("Max=%d",max);
}
int main()
{
	srand(time(0));
	int n;
	printf("Elementlar soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=enter();
		printf("%5d",arr[i]);
	}
	puts("");
	check(arr,n);
}
