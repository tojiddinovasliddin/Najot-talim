#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
int enter()
{
	return rand()%100;
}

int main()
{
	srand(time(0));
	int n;
	int cnt=0;
	printf("N ni kiriting: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=enter();
		printf("%4d",arr[i]);
	}
	puts(" ");
	for(int i=1;i<n-1;i++)
	{
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
		{
			printf("%4d",arr[i]);
			cnt++;
		}
	}
	if(cnt==0)
	printf("\nLocal max yuq");
}
