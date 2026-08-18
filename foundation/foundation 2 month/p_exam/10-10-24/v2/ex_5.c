#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void check(char ms[])
{
	int cnt=0;
	int k = strlen(ms);
	for(int i=0; i<k;i++)
	{
		if(ms[i]>='A' && ms[i]<='Z')
		{
		cnt++;
		}
	}
	if(cnt==k)
	puts("1");
	else
	puts("0");
}
int main()
{
	char str[100];
	printf("Kiriting: ");
	scanf("%[^\n]%*c",str);
	check(str);
return 0;
}
