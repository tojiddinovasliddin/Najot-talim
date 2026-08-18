#include <stdio.h>
int main()
{
	int number;
	printf("iltimos 3 xonali son kiriting: ");
	scanf("%d",&number);
	int a =number%10;
	int b=(number/10)%10;
	printf("Birlik son: %d\n", a);
	printf("Onlik son: %d\n", b);
	return 0;
}
