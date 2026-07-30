#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 int enter()
{
	return 1+rand()%(60-1+1);
}
 void check(int ms[],int n)
{
	puts("");
	int max=ms[0];
	for(int i=0;i<n;i++)
	{
	if(ms[i]>max)
	max=ms[i];
	}
	printf("Max=%d",max);
}
int main()
{
	int n;
	printf("Elelemntlar soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);
	}
	check(arr, n);
}
