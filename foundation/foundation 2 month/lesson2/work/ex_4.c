#include <stdio.h>
int main()
{
	int n,p,sum=0;
	printf("elementlar soni kiriting: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	sum+=arr[i];
	}
	p=sum/n;
	printf("Ortacha qiymati: %d",p);
}
