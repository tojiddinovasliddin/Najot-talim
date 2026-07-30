#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
return -20+rand()%(10-(-20)+1);
}
void check(int ms[],int n)
{
	int  cnt=0;
	for(int i=0;i<n;i++)
	{
		if(ms[i]<0)
		{
		cnt++;
		}
	}
	printf("\nManfiy sonlar soni -%d ta",cnt);
}
int main()
{
	srand(time(0));
	int n;
	printf("Elelemntar soni: ");
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
