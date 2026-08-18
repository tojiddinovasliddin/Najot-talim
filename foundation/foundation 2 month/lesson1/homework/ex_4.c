#include <stdio.h>
void check(int n)
{
	if(n % 2 == 0)
{
	puts("Juft");
}
	else
	puts("Toq");
}
	int main()
{
	int number;
	printf("Sonni kiriting: ");
	scanf("%d",&number);
	check(number);
	return 0;
}
