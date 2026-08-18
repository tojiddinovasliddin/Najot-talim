//Belgining harf yoki harf emasligini aniqlash
#include <stdio.h>
void check(char c)
{
	if(c>=65 && c<=90 || c>=97 && c<=122)
	{
	puts("Letter");
	}
	else
	{
	puts("Not a letter");
	}
}
int main()
{
	char a;
	printf("Kiriting: ");
	scanf("%c",&a);
	check(a);
}
