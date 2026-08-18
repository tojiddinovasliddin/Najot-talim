#include <stdio.h>

void check(int a,int b)
{
	if(a>b)
	return ;
	if(a%2 ==0)
	{
	printf("%d ",a);
	}
	check(a+1,b);
}

int main()
{
	int n,k;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter k:");
	scanf("%d",&k);
	check(n,k);
}
