#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main()
{
	int abonent,money;
	printf("Sizning telefon raqamingizda qancha pul bor: ");
	scanf("%d",&money);
	printf("Har oy abonent to'lovi qancha: ");
	scanf("%d",&abonent);
	int total=money-abonent;
	if(total<money)
{
	printf("Sizni hisobingizda ushbu mabilag' yetmaydi:%d\n", total*-1);
}	
	else if (total>0)
{
	printf("Abonent to'lovi yechildi va balansizgida ushu mabilag' qoldi:%d\n", total);
} 
	else if (total==0)
{
	puts("Abonent to'lov  yechildi  lekin hisobingiza mabilag qolmadi");
}

return 0;
}

