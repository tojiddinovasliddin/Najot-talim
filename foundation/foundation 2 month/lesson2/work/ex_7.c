#include <stdio.h>
int main()
{
	int sum=0;
	int arr[5]= {2,4,6,8,10};
	for(int i=0;i<5;i++)
	{
	sum+=arr[i];
	}
	int p=sum/5;
	printf("o‘rtacha arifmetik qiymatini: %d",p);
}
