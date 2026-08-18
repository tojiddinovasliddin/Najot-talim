#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int enter()
{
 return 14+rand()%(35-14+1);
}
void check(int ms[], int n)
{
	puts("");
	for(int i=0;i<n;i++)
	{
		if(ms[i]%2 ==0)
		printf("%d+,",ms[i]);
		else
		printf("%d,",ms[i]);
	}

}
int main()
{
	int n;	
	printf("Elementlar soni: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);
	}
	check(arr, n);
}


