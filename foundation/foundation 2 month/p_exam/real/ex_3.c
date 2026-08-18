#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <time.h>
void check(int ms[],int k)
{
	puts("");
	  int max=INT_MIN;
	for(int i=0;i<k;i++)
	{
		if(ms[i]>max)
		max=ms[i];
	}
	printf("Eng katta elemnet: %d",max);
}
int enter()
{
	return rand()%100;

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
		printf("%4d",arr[i]);
	}
	check(arr,n);
}
