#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void check(char ms)
{
	if(ms>=95 && ms<=122)
	{
	puts("1");
	}
	else
	puts("0≈");


}
int main()
{
	char str;
	printf("Belgini kiriting: ");
	scanf("%s",&str);
	check(str);
}
