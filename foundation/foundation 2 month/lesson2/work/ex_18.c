#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int ms[],int n)
{
	int index=0;
	for(int i=0; i<n;i++)
	{
		if(ms[i]>ms[index])
		{
		index=i;
		}
	
	}
	printf("\nEng katta elementning indexsi:  %d",index);
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
	printf("%d,",arr[i]);
	}
	check(arr, n);
}
