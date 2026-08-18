#include <stdio.h>
#include  <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
int main()
{
	srand(time(0));
	int *ms,n;
	printf("Elementlar soni: ");
	scanf("%d",&n);
	ms=(int*)calloc(n,sizeof(int));
	for(int i=-0;i<n;i++)
	{
	ms[i]=enter();
	printf("%4d",ms[i]);
	}
	int k;
	printf("\nK ni kiriting: ");
	scanf("%d",&k);
	for(int i=0;i<n-k;i++)
	{
	printf("%4d",ms[i]);
	}
	ms=(int*)calloc(n-k,sizeof(int));
	free(ms);
}
