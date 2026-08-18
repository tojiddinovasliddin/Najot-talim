#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
int check(int *ms,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
	sum+=*(ms+i);
	}
	return sum;
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
	printf("%d, ",arr[i]);
	}
	int sum=check(arr, n);
	printf("\nSum:%d",sum);
return 0;
}
