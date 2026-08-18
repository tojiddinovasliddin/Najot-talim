#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;

}
void check(int ms[],int n)
{
	printf("\n\tResult: ");
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(ms[i] % 2 ==1)
		{
		cnt++;
		}
	}
	printf("Toq elementlar soni: %d ta",cnt);
}
int main()
{
	srand(time(0));
	system("clear");
	int n;
	printf("Elementlar soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);
	}
	check(arr,n);
}
