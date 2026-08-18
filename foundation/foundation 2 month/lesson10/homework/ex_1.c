#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check( int *arr,int k)
{
	 for(int i=0;i<k;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			if(arr[i]>arr[j])
			{
			int d=arr[i];
			arr[i]=arr[j];
			arr[j]=d;
			}
		}
		 printf("%4d",arr[i]);
	}
}
int main()
{
	srand(time(0));
	int *ms;
	int n;
	printf("N ni kirting: ");
	scanf("%d",&n);
 	ms=(int *)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
	ms[i]=enter();
	printf("%4d",ms[i]);
	}
	puts("");
	check(ms,n);
	free(ms);
}
