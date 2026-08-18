#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}

void check(int *ms,int n)
{
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(*(ms+i)%2 ==0)
		{
		cnt++;
		}
	}
	printf("\nJuft sonlar: %d ta",cnt);

}

int main()
{
	system("clear");
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
return 0;
}
