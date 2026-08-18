#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	printf("enter your data: ");
	scanf("%[^\n]%*c",str);
	char * put=strtok(str,",- / ");
	printf("%s",put);
	while(put !=NULL)
	{
	puts(put);
	 put=strtok(NULL,", - /");

	}
}
