#include <stdio.h>
#include <stdlib.h>

void check(char ms[])
{
	for(int i=0; ms[i] !='\0';i++)
	{
		if(ms[i]==' ' || ms[i]=='_' || ms[i]==',')
		{
		ms[i]=i-1;
		}
	}
}	

int main()
{
	char str[100];
	printf("2 ta so'z kiriting: ");
	scanf("%[^\n]%*c",str);
	check(str);
	puts(str);
}
