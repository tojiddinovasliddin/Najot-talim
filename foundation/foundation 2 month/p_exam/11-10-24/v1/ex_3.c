#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n,m;
	printf("N ni kiriting: ");
	scanf("%d",&n);
	printf("M ni kiriting: ");
	scanf("%d",&m);
	swap(&n,&m);
	printf("N=%d",n);
	printf("\nM=%d",m);
}	
