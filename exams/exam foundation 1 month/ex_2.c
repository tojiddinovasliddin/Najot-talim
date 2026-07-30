#include <stdio.h>
int main()
{
	double a,b,c;
	printf("Birinchi soni kiriting: ");
	scanf("%lf",&a);
 	printf("Ikkinchi soni kiriting: ");
         scanf("%lf",&b);
 	printf("Uchinchi soni kiriting: ");
         scanf("%lf",&c);
	if(a<b && a<c)
	{
	printf("Eng kichikina son: %lf",a);
	}
	else if (b<a && b<c)
	{
	printf("Eng kichkina son: %lf",b);
	}
	else
	printf("Eng kichkina son: %lf",c);
}
