//Belgini katta harfga aylantirish
#include <stdio.h>
char uppercase(char c)
{
	int a;
	if (c>=97 && c<=122)
	{
	a=c-32;
	return a;
	}
	else 
	return c;
}
int main()
{
	char b;
	printf("Kiritng: ");
	scanf("%c",&b);
	printf("%c",uppercase(b));
	return 0;
}
