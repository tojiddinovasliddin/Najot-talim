#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char name[100];
	printf("Enter name: ");
	scanf("%[^\n]%*c",name);
	char surname[100];
	printf("Enter surname: ");
	scanf("%[^\n]%*c",surname);
	strcat(name, " ");
	printf("Fullname: %s \n", strcat(name ,surname));	
}
