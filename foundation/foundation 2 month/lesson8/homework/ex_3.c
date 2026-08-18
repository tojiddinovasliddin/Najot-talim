#include <stdio.h>
void check(int a,int b)
{
	if(a>b)
	return ;
	check(a+1,b);
	if( a% 2 ==0)
	{
	printf("%d ",a);
	}
}

int main()
{
	int n,k;
	printf("N bilan K ni kirting: ");
	scanf("%d%d",&n,&k);
	check(n,k);
}
