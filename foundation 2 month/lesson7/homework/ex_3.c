#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main()
{
	char str[100];
	printf("Enter: ");
	scanf("%[^\n]%*c",str);
	char tel[100]="telegram";
	char you[100]="youtube";
	char *check1=strstr(str,tel);
	char *check2=strstr(str,you);
	if( check1>0)
	{
	printf("Messager");
	}
	else if(check2>0)
	{
	puts("Video platform");
	}
	else
	{
	puts("Boshqa sayt");
	}
}
