#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	int number1;
	printf("birinchi sonni kiriting: ");
	scanf("%d",&number1);
	printf("Ikkinchi sonni kiriting: ");
	int number2;
	scanf("%d",&number2);
	if (number1>number2)
{
	printf("Result: %d\n", number1);
} 
	 else if  (number2>number1)
{
	 printf("Result: %d\n", number2);
}

	else
	puts("Sonlar o'zaro  teng "); 	

return 0;
}
