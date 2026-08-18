#include <stdio.h>
#include <stdlib.h>
void check(char ms[])
{
	int l = 0;
	for (int i = 0; ms[i] != '\0'; i++)
    	{
    	l++;
    	}	
	for (int j = l - 1; j >= 0; j--)
	{
	printf("%c", ms[j]);
	}
}

int main()
{
	char str[100];
	printf("Enter: ");
	scanf("%[^\n]%*c", str);
	check(str);
}
