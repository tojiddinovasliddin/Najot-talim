#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main()
{
	int money;
	char tip;
	start:
	printf("\tUshbu valyutadan bittasida kiriting\n");
	printf("1.'r' rub\n");
	printf("2.'$' dollar\n");
	printf("3.'t' tenge\n");
	printf("4.'f' funt sterling\n");
	printf("5.'s' so'm\n");
	printf("Pul midorini kiriting (100r): ");
	scanf("%d %c",&money,&tip);
	switch(tip)
{
	case 'r': printf("%d == %d so'm",money,money * 165); break;
	case '$': printf("%d == %d so'm", money,money * 12000); break;
	case 't': printf("%d == %d so'm", money,money * 25); break;
	case 'f': printf("%d == %d so'm", money, money * 16000); break;
	case 's': printf("%d == %d so'm", money, money *1); break;
	default : printf("siz notugli valyuta qimmatini kiritingiz boshqadan kiriting\n ");  break;
}
	goto start;
 return 0;
}
