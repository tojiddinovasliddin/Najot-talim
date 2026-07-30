#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
int enter()
{
return  -100+rand()%(100-(-100)+1);
}
void check(int ms[],int n)
{
	int max=INT_MAX; 
	int min=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(ms[i]>min)
		min=ms[i];
	}
		printf("\neng katta son: %d",min);
	for(int i=0;i<n;i++)
	{
		if(ms[i]<max)
		max=ms[i];
	}
	printf("\neng kichkina son: %d",max);
	int c=min-max;
	printf("\neng katta va eng kichik elementlar orasidagi farqi: %d",c);
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
	check(arr,n);
return 0;
}

