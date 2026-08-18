#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
double check(int ms[],int k)
{
	int sum=0;
	for(int i=0;i<k;i++)
	{
	sum+=ms[i];

	}
return sum/k*1.0;	
}
int main()
{
	srand(time(0));
	int n;
	printf("N ni kiriting: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=enter();
		printf("%4d",arr[i]);
	}
	printf("\nO'rta alifmetikasi teng: %.2lf",check(arr,n));
return 0;
}
