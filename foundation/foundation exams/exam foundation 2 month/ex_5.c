#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void check(double *k)
{
	{
		*k=sqrt(*k);
	}
}
int main()
{
	double n;
	printf("N ni kiriting: ");
	scanf("%lf",&n);
	if(n>0)
	{
	check(&n);
	printf("%.2lf",n);
	}
	else
	puts("Manfiy son kirimang");
}
