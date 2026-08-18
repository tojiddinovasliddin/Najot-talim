#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return -20+rand()%(20-(-20)+1);
}
void check(int ms[],int k)
{
	int cnt=0;
	for(int i=0;i<k;i++)
	{
		if(ms[i]>0)
		cnt++;
	}
	printf("Musbat sonalar soni: %d ta ",cnt);
}

int main()
{
	srand(time(0));
	int n;
	printf("Elelemntalar soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int  i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%5d",arr[i]);
	}
	puts("");
	check(arr,n);
}
