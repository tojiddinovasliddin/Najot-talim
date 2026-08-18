#include <stdio.h>
#include <stdlib.h>

void check( char ms[])
{
	for(int i=0; ms[i] !='\0';i++)
	{
		if(ms[i] =='e')
		{
		ms[i]='*';
		}
	}

}

int main()
{
	char str[100];
	printf("Enter: ");
	scanf("%[^\n]%*c",str);
	check(str);
	puts(str);
}
