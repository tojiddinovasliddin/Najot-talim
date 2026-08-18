#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int cnt=0;
	printf("\tUshbu gapni to'ldiring:\n");
	printf("I .. to school.\n");
	printf("run\n");
	printf("jump\n");
	printf("go\n");
	printf("cry\n");
	char run[100]="run";
	char jump[100]="jump";
	char go[100]="go";
	char cry[100]="cry";
	char enter[100];
	start:
	printf("variantni kiriting: ");
	scanf("%[^\n]%*c",enter);
	int a=strcmp(run,enter);
	int b=strcmp(jump,enter);   
	int c=strcmp(go,enter);   
	int d=strcmp(cry,enter);  
	if(a==0 || b==0 || d==0)
		{
			puts("Xato boshqa variani kiriting ");
			cnt++;
			goto start;
		
		}
	else if(c==0)
		{
		cnt++;
		printf("To'gri javob  siz %d urinishda topdingiz",cnt);
		}
	else
		{
		puts("Bunday variant ruyxatda yuq");
		cnt++;
		goto start;

		}
}
