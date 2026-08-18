#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char str[100];
	printf("Kiriting: ");
	scanf("%[\n]%*c",str);
	int k=strlen(str);
	for(int i=0;i<k;i++)
	{
		printf("%d",str[i]);
	}
}
