#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void  twice(int *massiv,int n)
{
	int k;
	printf("\n\tResult:");
	for(int i=0;i<n;i++)
	{
	k = (*(massiv + i)) * (*(massiv + i));
	printf("%d,",k);
	}
}
int main()
{
	system("clear");
	int n;
	printf("Elementlar soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);
	}
	twice(arr,n);
}
