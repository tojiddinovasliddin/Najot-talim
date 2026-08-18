#include <stdio.h>
#include <stdlib.h>

void check(char ms[])
{
	int cnt=0;
	int i;
	for( i=0; ms[i] !='\0';i++)
	{
		if((ms[i] >= '0' && ms[i] <= '9') ||
           	(ms[i] >= 'a' && ms[i] <= 'z') ||
           	(ms[i] >= 'A' && ms[i] <= 'Z'))
		
		{	
			cnt++;	
 		}		
	}
	if(i==cnt)
	{
	printf("To'g'ri");
	}
	else
	{
	puts("Noto'g'ri");
	}
}


int main()
{
	char str[100];
	printf("Enter password: ");
	scanf("%[^\n]%*c",str);
	check(str);
}
