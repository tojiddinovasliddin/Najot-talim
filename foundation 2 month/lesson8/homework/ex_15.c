#include <stdio.h>
#include <string.h>

int main()
{
	int cnt =0;
	char str[100];
	printf("Enter: ");
	scanf("%[^\n]%*c",str);
	int k=strlen(str);
	for(int i=0;  i<k; i++)
	{
	if(str[i]>='0' && str[i]<='9')
	{
	cnt++;
	}
	}
	printf("%d",cnt);
}
