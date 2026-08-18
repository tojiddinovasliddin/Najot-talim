#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void check(char satr[],char b,char  c)
{

	for(int i=0; satr[i]!='\0';i++)
	{
		if(satr[i]==b)
		{
		satr[i]=c;
		}
	}
}
int main()
{
	char str[100];
	printf("kiriting: ");
	scanf("%[^\n]%*c",str);
	char belgi;
	printf("Qaysi harfni uzgatimochsiz: ");
	scanf(" %c",&belgi);
	char change;
	printf("nimaqa uzgartilasiz: ");
	scanf(" %c",&change);
	check(str,belgi,change);
	printf("Natija:  %s\n",str);
}

