#include <stdio.h>
int main()
{
	int number;
	printf("iltimos soni kiriting: ");
	scanf("%d", &number);
	int a=number%10;
	int b=(number/10)%10;
	int c=number/100;
	int d=(a*100)+(b*10)+c;
	printf("ushbu soning teskarisi: %d\n" ,d);
	return 0;
}
