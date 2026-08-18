#include <stdio.h>

void check(double a,double b)
{
	double  c=a+b;
	printf("%.2lf",c);
}
int main()
{
	double x,y;
	printf("X ni kiriting: ");
	scanf("%lf",&x);
	printf("Y ni kiriting: ");
	scanf("%lf",&y);
	check(x,y);
return 0;
}

