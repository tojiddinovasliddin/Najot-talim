#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int ms[],int n)
{
	printf("\nnew massiv: \n");
	for(int i=0;i<n;i++)
	{
	printf("%d,",ms[i]);
	}
}
int main()
{
	int n;
	printf("elemneltar soni; ");
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
