#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[1000];
	printf("Enter: ");
	scanf("%[^\n]%*c",str);
	char enter[100];
	printf("Qaysi so'zni qidiryapsiz: ");
	scanf("%[^\n]%*c",enter);
	char *search[100];
	*search=strstr(str,enter);
	if(*search !=NULL)
	{
	printf("error");
	}	
	else
	{
	puts("Hammasi yaxshi");
	}
	return 0;
}
