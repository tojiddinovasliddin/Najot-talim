#include <stdio.h>
int main()
{
	int number,ctn;
	printf("Sonni kiriting: ");
	scanf("%d",&number);
	do
	{
	number = number / 10;
	if ( number % 2 == 1)
	{
	ctn++;
	}
	} while(number>0);
	printf("%d -ta toq son bor ", ctn);
}

