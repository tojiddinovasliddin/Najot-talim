#include <stdio.h>
int main()
{
	int a;
	printf("Nechta element kiritmoqchisiz: ");
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++)
	{
	scanf("%d",&arr[i]);
	if(arr[i]<0)
	{
	arr[i]=arr[i] * -1;
	}
	printf("%d| ",arr[i]);
	}
}
