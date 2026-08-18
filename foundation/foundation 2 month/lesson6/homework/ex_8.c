#include <stdio.h>
#include <stdlib.h>
void check( char ms[])
{
	for(int i=0; ms[i] != '\0'; i++)
	{
		if(ms[i]>='0' && ms[i]<='9')
		{
		printf("%c",ms[i]);
		}
	}
}

int main()
{
	char str[100];
	printf("Kiriting: ");
	scanf("%[^\n]%*c",str);
	check(str);
}
