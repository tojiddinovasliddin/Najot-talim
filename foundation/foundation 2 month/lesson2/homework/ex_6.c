#include <stdio.h>
int main()
{
	int p,max=0;
	printf("Nechta element kiritmoqchisiz: ");
	scanf("%d",&p);
	int arr[p];
	for(int i=0;i<p;i++)
	{
	scanf("%d",&arr[i]);
	if(arr[i] % 2==0)
	{
	if( max<arr[i])
	{
	max=arr[i];
	}
	}
	}
	printf("Eng katta juft son: %d",max);
}
