#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	int number;
	printf("Sonni kiriting: ");
	scanf("%d",&number);
	if (number>0 && number<10000)
{
	switch(number/1000)
{
	case 1: printf("bir ming "); break;
	case 2:	printf("ikki ming ");break;
	case 3:	printf("uch ming "); break;
	case 4:	printf("tort ming "); break;
	case 5: printf("besh ming "); break;
	case 6: printf("olti ming "); break;
	case 7: printf("yetti ming "); break;
	case 8: printf("sakiz ming "); break;
	case 9: printf("to'qiz ming "); break;
}
	switch(number/100%10)
{
	case 1: printf("bir yuz "); break;
	case 2: printf("ikki yuz "); break;
	case 3: printf("uch yuz "); break;
	case 4: printf("tor yuz "); break;
	case 5: printf("besh yuz "); break;
	case 6: printf("olti yuz "); break;
	case 7: printf("yetti yuz "); break;
	case 8: printf("sakkiz yuz "); break;
	case 9: printf("to'qi yuz "); break;
}
	switch(number/10%10)
{
 	case 1: printf("o'n ");    break;
	case 2: printf("yigirma ");break;
	case 3: printf("o'ttiz "); break;
	case 4: printf("qirq ");   break;
	case 5: printf("ellik ");  break;
	case 6: printf("oltmish ");break;
	case 7: printf("yetmish ");break;
	case 8: printf("sakson "); break;
	case 9: printf("to'qson ");break;
}
	switch(number%10)
{
	case 1: printf("bir\n"); break;
	case 2: printf("ikki\n");break;
	case 3: printf("uch\n");break;
	case 4: printf("to'rt\n");break;
	case 5: printf("besh\n");break;
	case 6: printf("olti\n");break;
	case 7: printf("yetti\n");break;
	case 8: printf("sakkiz\n");break;
	case 9: printf("to'qqiz\n");break;
}
}
	else
{
	puts("notug'li raqam kiritingiz");
}
return 0;
}
	
