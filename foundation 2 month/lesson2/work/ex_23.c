#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int ms[],int n)
{
	int sum=0;
	printf("\n\tResult: \n");
	for(int i=0; i<n;i++)
	{
	if(i % 2==0)
	{
	printf("%d,",ms[i]);
	sum+=ms[i];
	}
	}
	printf("\nsum= %d",sum);
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
	printf("%d,",arr[i]);
	}
	check(arr, n);
}
