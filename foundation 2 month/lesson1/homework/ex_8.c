#include <stdio.h>
char lower(char c)

{
	int b;
	if(c>=65 && c<=90)
	{
	b=c+32;
	return b;
	}
	return c;
	
}

	int main()
{	char i;
	printf("Kiriting: ");
	scanf("%c",&i);
	printf("%c",lower(i));
	return 0;
}

