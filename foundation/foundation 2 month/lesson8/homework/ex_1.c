#include <stdio.h>
void check(int a)
{
	if(a==0)
	return ;
	check(a-1);
	printf("%d ",a);
}

int main()
{
	int n;
	printf("N ni kiriting: ");
	scanf("%d",&n);
	check(n);
}
