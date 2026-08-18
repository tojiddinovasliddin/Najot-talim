#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return -20+rand()%(20-(-20)+1);
}
void  check(int ms[],int k)
{
	int  man=0;
	int mus=0;
	for(int i=0;i<k;i++)
	{
		if(ms[i]>0)
		mus++;
		else
		man++;
	}
	printf("\nMustbat sonlari: %d\n", mus);
	printf("Manfiy sonlari: %d",man);
}
int main()
{
	int n;
	printf("N ni kiriting: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=enter();
		printf("%5d",arr[i]);
	}
	check(arr,n);
}
