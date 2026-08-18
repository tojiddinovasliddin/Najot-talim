#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	double time;
	printf("Kuninga nechi soat dars qilishga ajratasiz: ");
	scanf("%lf", &time);
	if(time<1.0)
{
	puts("Juda ham oz!");
}
	else if (time>=1.0 && time<=2.0)
{
	puts("Yomonmas!");

}
	else
{
	puts("Yaxshi!");
}

return 0;
}

