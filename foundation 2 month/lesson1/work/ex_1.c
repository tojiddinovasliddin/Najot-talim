//1-masala: Sonning kvadratini hisoblash
#include <stdio.h>
int square(int num)
{
	int a;
	a= num * num;
	return a;
}
int main()
{
	int b;
	printf("sonni kiriting: ");
	scanf("%d",&b);
	printf("Sonning kv: %d",square(b));
	return 0;
}
