#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int ms[],int n)
{
	printf("\nResult:\n");
	int k[n];
	for(int i=0;i<n;i++)
	{
	k[i]=ms[i]*2;
	printf("%d,",k[i]);
	}
}
int main()
{
	int n;
	printf("Elemntlar soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);
	}
	check(arr, n);
}
