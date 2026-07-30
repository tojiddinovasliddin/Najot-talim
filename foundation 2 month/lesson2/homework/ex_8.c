#include <stdio.h>
int main()
{
	int n;
	printf("Necht element kitmoqchisiz: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	if(i>0)
	{	
	printf("%d| ",arr[i]);	
	}
	}
	for(int i=0;i<n;i++)
	{
	if(i==0)
	{
	printf("%d",arr[i]);
	}
	}
}
