#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	int number1,number2;
	printf("birinchi sonni kiriting: ");
	scanf("%d",&number1);
	printf("Ikkinchi sonni kiriting: ");
	scanf("%d",&number2);
	char result ;
	printf("Amarni kiriting: ");
	scanf(" %c",&result);

	if (result =='-')
{
	int minus=number1-number2;
	printf("Sonnining ayilmasi :%d\n",minus);
}
	else if (result=='+') 
{
	int add = number1+number2;
	printf("Sonning yig'indisi : %d\n",add);
}	else
{
	puts("bunday amal mavjud emas");
}

return 0;
}
	 
