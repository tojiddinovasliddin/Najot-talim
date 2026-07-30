#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
int choice;
	printf("\nQuydagi fanlar mavjud");
	printf("\n1. O'zbek tili");
	printf("\n2.Turk tili");
	printf("\n3.Arab tili");
	printf("\n4.Tojik tili");
	printf("\nfanlardan 1 tasini tanlang: ");
	scanf("%d",&choice);
	if ( choice==1)
{
	puts("O'zbek tili");
}
	else if (choice==2)
{
	puts("Turk tili");
}
	else if(choice==3)
{
	puts("Arab tili");
}
	else if(choice==4)
{
	puts("Tojik tili");
}
	else
	puts("Bunday til mavjud emas");
return 0;
}
