#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return -10+rand()%(5-(-10)+1);
}
void check(int ms[],int n)
{
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(ms[i]==0)
		{
		cnt++;
		}
	}
	printf("\nNolar - %d ta",cnt);
}
int main()
{
	system("clear");
	srand(time(NULL));
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
return 0;
}	
