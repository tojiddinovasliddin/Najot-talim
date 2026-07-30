#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
int book()
{
	return rand()%100;
}
void sum(int *a,int *b,int n)
{
	int  natija[n];
	printf("\nYigindisi: ");
	for(int i=0;i<n;i++)
	{
		natija[i]=a[i]+b[i];
	printf("%d,",natija[i]);
	}
}
int main()
{
	srand(time(0));
	int n;
	printf("Ikk massivni elementlar soni:");
	scanf("%d",&n);
	int arr[n],ms[n];
	printf("Birinchi massiv: ");
	for(int i=0;i<n;i++)
	{
		arr[i]=enter();
		printf("%d,",arr[i]);
	}

	printf("\nIkkinchi massiv: ");
	for(int i=0;i<n;i++)
	{
	ms[i]=book();
	printf("%d,",ms[i]);
	}
	sum(arr,ms,n);
return 0;
}

