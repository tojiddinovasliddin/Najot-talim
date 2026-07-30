#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int ms[],int k)
{
	int sum=0;
	for(int i=0;i<k;i++)
	{
		sum+=ms[i];
	}
	printf("Massivlar yigindisi: %d",sum);
}
int main()
{
	srand(time(0));
	int n;
	printf("Elelemtnlar soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=enter();
		printf("%4d",arr[i]);
	}
	puts("");
	check(arr,n);
}
