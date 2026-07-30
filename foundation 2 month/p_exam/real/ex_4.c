#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void check(int ms[],int k)
{
	puts("");
	for(int i=0;i<k;i++)
	{
		if(ms[i]<0)
		{
		ms[i]=ms[i]*(-1);
		}
	}
}
void chec(int ms[],int k)
{
	puts("");
	for(int i=0;i<k;i++)
	{
	printf("%4d",ms[i]);
	}
}
int enter()
{
	return -20+rand()%(20-(-20)+1);
}
int main()
{
	srand(time(0));
	int n;
	printf("Element lar soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%4d",arr[i]);
	}
	check(arr,n);
	chec(arr,n);
}
