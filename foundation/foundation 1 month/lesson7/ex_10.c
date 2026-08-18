#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	int balance;
	printf("Qancha puliz bor: ");
	scanf("%d",&balance);
	if( balance>0)
{
	printf("Sizning pulinging miqdori: %d\n", balance);
}	
	else if(balance<0)
{
	printf("Sizning qarzingiz miqdori: %d\n",  balance);
}
	else
	puts("Sizning pulling yuq ekan");
return 0;
}

