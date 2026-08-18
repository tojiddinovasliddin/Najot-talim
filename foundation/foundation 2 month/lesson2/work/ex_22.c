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
	int min=INT_MAX;
	float k[n];
	for(int i=0;i<n;i++)
	{
	if(ms[i]<min)
	min=ms[i];
	}
	printf("\nMin:%d",min);
	if(min==0)
	puts("Bo'lish mumkin emas");
	else if( min>0)
	{
	printf("\n\tResult: \n");
	for (int i=0;i<n;i++)
	{
	k[i]=ms[i]*1.0/min;
	printf("%.2f,",k[i]);
	}
	}
}
int main()
{
	srand(time(0));
	int n;
	printf("Elementlar soni; ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);
	}
	check(arr, n);
return 0;
}
