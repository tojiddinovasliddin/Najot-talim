#include <stdio.h>
#include <limits.h>
int main()
{
	int n,max=0;
	int min= INT_MAX;
	printf("Nechta element kiritmoqchisiz: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	if(max<arr[i])
	{
	max=arr[i];
	}
	}
	for(int i=0;i<n;i++)
	{
	if(min>arr[i])
	{
	min=arr[i];
	}
	}
	printf("\nMax: %d",max);
	printf("\nMin: %d",min);
	int c=max-min;
	printf("\nMax va Min ni farqi: %d",c);
}
