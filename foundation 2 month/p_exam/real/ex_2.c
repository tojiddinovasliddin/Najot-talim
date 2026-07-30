#include <stdio.h>
#include <stdlib.h>
double   check(int k)
{
	return 3.14*k*k;
}
int main()
{
	int n;
	printf("Kiriting: ");
	scanf("%d",&n);
	double d = check(n);
	printf("%.2lf",d);
}
