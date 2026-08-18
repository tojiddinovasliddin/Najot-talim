#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char enter[100];
	printf("Enter password: ");
	scanf("%[^\n]%*c",enter);
	int k=strlen(enter);
	int total=0,cnt=0;
	if(k>=8)
	{
		for(int i=0;enter[i] !='\0';i++)
		{
	 		if(enter[i]>='A' && enter[i]<='Z' || enter[i]>='a' && enter[i] <='z')
			{
				cnt++;
			}
			else if( enter[i]>='0' && enter[i]<='9')
			{
				total++;
			}
		}
	}
	else if(k<8)
	{
	puts("kamida 8 ta bolishi kerak");
		return 1;
	}
	if(total>0 && cnt>0)
	{
		printf("To'gri");
	}
	else
	{
	puts("notugri");
	}
}
