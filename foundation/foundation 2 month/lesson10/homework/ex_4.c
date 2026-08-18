#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
int enter()
{
	return rand()%100;
}
void check(int *arr,int k)
{
	for(int i=0;i<k;i++)
	{
		printf("%4d",arr[i]);

	}
}
int main()
{
	srand(time(0));
	int *ms,n;
	int min=INT_MAX;
	int index=0;
	printf("Kiriting: ");
	scanf("%d",&n);
	ms=(int *)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
		ms[i]=enter();
		printf("%4d",ms[i]);
	}
	puts("");
	for(int i=0;i<n;i++)
	{
		if(ms[i]<min)
		{
		min=ms[i];
		index=i;
		}
	}
	for(int i = index; i < n-1; i++)
        ms[i] = ms[i+1];
	n--;
	ms = realloc(ms, n * sizeof(int));
	printf("Max= %d",min);
	puts("");
	check(ms,n);
}
