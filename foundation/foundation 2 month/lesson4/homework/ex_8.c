#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int * massiv,int n)
{
	printf("\nResult:  ");
	int k;
	for(int i=0;i<n;i++)	
	{
	k=(*(massiv+i))*(*(massiv+i));
	printf("%d,",k);
	}
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
	check(arr, n);
return 0;
}
