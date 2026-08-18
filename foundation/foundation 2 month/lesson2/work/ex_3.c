#include <stdio.h>
int main()
{
	int sum=0,n;
	printf("Elementlar soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	sum+=arr[i];
	}
	printf("Sum: %d",sum);

}
