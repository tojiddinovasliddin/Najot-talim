#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
int enter()
{
	return rand()%100;
}

int main()
{
	srand(time(0));
	int ind=0;
	int max=INT_MIN;
	int n;
	printf("N ni kiriting: ");
	scanf("%d",&n);
	int *arr=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
		arr[i]=enter();
		printf("%4d",arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			ind=i;
		}
	}
	printf("\nMax=%d\n",max);
	printf("Ind=%d\n",ind);
}
