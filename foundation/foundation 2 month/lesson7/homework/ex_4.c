#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[100];
	printf("Enter: ");
	scanf("%[^\n]%*c",str);
	char jbg[100]="jpg";
	char mp[100]="mp3";
	char  txt[100]="txt";
	char *check1=strstr(str,jbg);
	char *check2=strstr(str,mp);
	char * check3=strstr(str,txt);
	if(check1>0)
	{
	puts("Rasm fayl");
	}
	else if(check2>0)
	{
	puts("Autio fayl");
	}
	else if(check3>0)
	{
	puts("Matn fayl");
	}
	else
	{
	puts("Bunday fayl yuq");
	}
}
