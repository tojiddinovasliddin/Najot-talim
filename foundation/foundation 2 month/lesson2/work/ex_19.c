#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return -20+rand()%(20-(-20)+1);
}
void check(int ms[],int n)
{
	printf("\nResult: ");
	if(ms[n-1]<0)
	puts("true");
	else
	puts("false");
	
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
return 0;
}
