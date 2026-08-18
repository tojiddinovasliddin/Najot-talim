#include <stdio.h>
#include <stdlib.h>

void check( char ms[])
{
	int i;
	int cnt=0;
	for( i=0; ms[i] !='\0';i++)
	{
		if(ms[i]>='A'  && ms[i]<='Z')
		{
		cnt++;
		}
	}
		if(i==cnt)
		printf("YES");
		else 
		puts(" no");
}

int main()
{
	char str[100];
	printf("Enter: ");
	scanf("%[^\n]%*c",str);
	check(str);
}
