#include <stdio.h>
int main()
{
	int n;
	printf("Elementlar soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i--)
	{
	scanf("%d",&arr[i]);
	printf("%d, ",arr[i]);
	}
}
