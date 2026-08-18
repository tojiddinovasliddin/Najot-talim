#include <stdio.h>
#include <stdlib.h>
#include "book.h"
void check( char ms[])
{
	int cnt=0;
	for(int i=0; ms[i] !='\0'; i++)
	{
		if(ms[i]=='a' || ms[i]== 'A')
		{
		cnt++;
		}
	}
	printf("\nA harfi jami %d-ta",cnt);

}
int main()
{
	char str[100];
	printf("Enter: ");
	scanf("%[^\n]%*c",str);
	puts(str);
	check(str);
}
