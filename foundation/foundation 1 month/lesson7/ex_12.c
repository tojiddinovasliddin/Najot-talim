#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	double buy;
	printf("Bo'yiz nechi: ");
	scanf("%lf",&buy);
	double vazn;
	printf("Vazniz qancha: ");
	scanf("%lf",&vazn);
	if ( buy >=180.0 && vazn>=70.0)
{
	puts("qabul qilinding");
}
	else if (buy >= 180.0 && vazn<70.0)
{
	puts("Zaxiradasan");
}
	else if (buy<180.0 && vazn>=70)
{ 	puts("zaxiradasan");
}
	else
	puts("Sog bo'l uka");
return 0;
}
