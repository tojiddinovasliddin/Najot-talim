#include <stdio.h>
int main()
{
	int n;
	printf("Nechta element kiritmoqchisz: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	printf("%d|",arr[i]);
	}
}
