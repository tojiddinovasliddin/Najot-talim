#include <stdio.h>
#include <stdlib.h>
void check( char ms[])
{	
	int cnt=0;
	for(int i=0; ms[i] !='\0';i++)
	{
		if(ms[i]==' ')
		{
		cnt++;
		}
	}
	printf("Proberlas  soni: %d ta",cnt);
}
int main()
{
	char str[100];
	printf("Enter: ");
	scanf("%[^\n]%*c",str);
	check(str);
}
