#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int ms[],int n)
{
	printf("\n\tresult: ");
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(ms[i]% 2 ==0)
		{
		sum+=ms[i];
		}
	}
	printf("Sum: %d",sum);
}
int main()
{
	system("clear");
	int n;
	printf("elementlar soni: ");
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
