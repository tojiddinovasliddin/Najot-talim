#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char search[100];
	printf("Enter command: ");
	 scanf("%[^\n]%*c",search);
	char com[100]="/start";
	char com1[100]="/help";
	int check=strstr(search,com);
	int check1=strstr(search,com1);
	if (check ==0)
		{	
		puts("Bot ishga tushadi");
		}
	else if (check1==0)
		{	
		puts("Yordam menyusi");
		}
	else 
		{
		puts("Nomalum buyriq");
		}
}
 
