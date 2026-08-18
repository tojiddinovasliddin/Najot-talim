#include <stdio.h>
void check(int n,int i)
{
	if(n==i)
{
	printf("Tub son");
	return ;
}	
	else if( n% i==0)
{	printf("TUb son emas");
	return ;
}
	check(n,i+1);
}
int main()
{
	int k;
	printf("Kiriting: ");
	scanf("%d",&k);
	check(k,2);
}
