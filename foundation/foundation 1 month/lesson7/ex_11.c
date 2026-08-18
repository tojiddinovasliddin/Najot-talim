#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	int fuel,gas;
	printf("Benzin miqdori kiriting: ");
	scanf("%d",&fuel);
	printf("Gaz miqdroini kiriting: ");
	scanf("%d",&gas);
	if (fuel<10 &&  gas<10)
{
	puts("Yonilgi quydilish kerak");
}
	else if (fuel>=10 && fuel<=20 || gas>=10 && gas<=20)
{
	puts("Yonilgi quydirib olsak yaxshi buladi");
}
	else
	puts ("gazini boss");
return 0;
}
