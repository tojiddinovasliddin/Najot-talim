// Belgining katta yoki kichik harf ekanligini aniqlash 
#include <stdio.h>
void check(char c)
{
	if(c>=65 && c<=90)
	{
	puts("Uppercase");
	}
	else if(c>=97 && c<=122)
	{
	puts("Lowercase");
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
