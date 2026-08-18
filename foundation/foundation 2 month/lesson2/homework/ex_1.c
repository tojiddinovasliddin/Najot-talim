#include <stdio.h>
int main()
{
	int n,i;
	printf("Nechta massiv kiritimoqchisiz: ");
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	arr[i]=arr[i]*arr[i];
	printf("%d|",arr[i]);
}
}
