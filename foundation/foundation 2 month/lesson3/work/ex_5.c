#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return 1+rand()%(30-1+1);	
}
void check(int ms[],int n)
{
	puts("");
	for(int i=0;i<n;i++)
	{
		if(ms[i]%2==0)
		printf("%d,",ms[i]*2);
		else
		printf("%d,",ms[i]-2);		
	}

}
int main()
{
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
