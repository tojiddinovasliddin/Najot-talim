#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return  -15+rand()%(25+15-1);
}
void chech(int ms[], int n)
{
	printf("\nresult\n");
	for(int i=0;i<n;i++)
	{
	if(ms[i]>0)
	printf("%d,",ms[i]);
	}
}

int main()
{
	int n;
	printf("Elementlar soni:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);

	}
	chech(arr, n);

}
