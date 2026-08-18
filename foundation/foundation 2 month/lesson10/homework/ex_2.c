#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int *arr,int k)
{
	puts("");
	int cnt=0;
	for(int i=1;i<k-1;i++)
	{
		if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
		{
		printf("%4d",arr[i]);
		cnt++;
		}
	}
	if(cnt ==0)
	{
		puts("Lokal maximu mavjud emas");
	}
}

int main()
{
	srand(time(0));
	int *ms;
	int n;
	printf("Elementlar soni ");
	scanf("%d",&n);
	ms= (int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
	ms[i]=enter();
	printf("%4d",ms[i]);
	}
	check(ms,n);
	free(ms);

}
