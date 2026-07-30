#include <stdio.h>
#include <stdlib.h>

void  check(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

int main()
{
	int a,b;
	printf("A ni kiriting: ");
	scanf("%d",&a);
	printf("B ni kiriting: ");
	scanf("%d",&b);
	check(&a,&b); 
	printf("A ni kiymati: %d\n",a);
	printf("B ni kiymati: %d\n",b);
}
