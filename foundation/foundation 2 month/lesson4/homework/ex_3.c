#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check( int *massiv,int n)
{
	printf("\n\tResult\n");
	for(int i=n-1;i>=0;i--)
	{
	printf("%d,",massiv[i]);
	}

}

int main()
{
	int n;
	printf("Elementlar soni ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);
	}
	check(arr, n);	
}
