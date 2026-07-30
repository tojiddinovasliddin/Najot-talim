#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void check( char ms[])
{	

	for(int i=0; ms[i] !='\0';i++)
	{
	
		if( ms[i]>=65  && ms[i]<=90)
		{
 		ms[i]=tolower(ms[i]);	
		}
		else if(ms[i]>=97 && ms[i]<=122)
		{
		ms[i]=toupper(ms[i]);
		}
	}
}
int main()
{
	char str[100];
	printf("Enter: ");
	scanf("%[^\n]%*c",str);
	check(str);
	puts(str);
}
