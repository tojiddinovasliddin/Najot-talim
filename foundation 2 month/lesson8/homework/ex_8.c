#include <stdio.h>
int check( int k)
{
	if(k<10)
	return 1;
	else
	{
	return 1 + check(k/10);
	}
}
int main()
{
	int n;
	printf("Elementlar soni: ");
	scanf("%d",&n);
	int a=check(n);
	printf("%d",a);
}
