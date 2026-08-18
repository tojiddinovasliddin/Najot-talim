#include <stdio.h>
int main()
{
	int number;
	printf("Iltimos soni kiriting: ");
	scanf("%d",&number);
	int a=number%10;
	int b=(number/10)%10;
	int c=number/100;
	int d= (c*100)+(a*10)+b;
	printf("Result is: %d\n", d);
	return 0;
}
