#include <stdio.h>
	int  cube( int num)
{
	int c=num*num*num;
	return c;
}
	int main()
{
	int a;
	printf("Sonni kiriting: ");
	scanf("%d",&a);
	printf("sonning kubi: %d",cube(a));
	return 0;
}
