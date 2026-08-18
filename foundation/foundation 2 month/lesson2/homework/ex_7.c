#include <stdio.h>
int main()
{
	int i,n,sum=0;
	
	printf("Elementlar soni kiritng:: ");
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n; i++)
	{
	scanf("%d",&arr[i]);
	sum+=arr[i];
	}
	double k=sum/n;
	printf("O'rta alifmetikasi:%.2lf\n",k);
	for(i=0;i<n;i++)
	{
	if(arr[i]>k)
	{
	printf(" %d|",arr[i]);
	}
	}
}
