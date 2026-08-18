#include <stdio.h>
int main()
{
	int number;
	printf("Iltimos soni kiriting: ");
	scanf("%d",&number);
	int a= number%10;
	int b=number/10;
	int c=(a*100)+(number/10);
	printf("Result is: %d\n", c);
	return 0;
}
