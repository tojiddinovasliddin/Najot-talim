#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int enter()
{
	return -15+rand()%(30-(-15)-1);
}
int  check(int a)
{
	if(a % 2 == 0)
	{
	printf("%d|",a);
	}
	return a;
}
int main()
{
	 srand(time(0));
	int n;
	printf("Elementlar soni kiritinvg: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d|",arr[i]);
	}
	printf("\n\t\tNatija\n");
	for(int i=0;i<n;i++)
	{
	check(arr[i]);
	}
}
