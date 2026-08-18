#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
int main()
{
	system("clear");
	int n;
	printf("Elelementlar soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);
	}
	printf("\t\nTeskari sonlari\n ");
	for(int i=n-1;i>=0;i--)
	{
	printf("%d, ",arr[i]);
	}
}
