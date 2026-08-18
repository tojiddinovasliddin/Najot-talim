#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	int number1,number2;
	printf("Birinchi sonni kiriting: ");
	scanf("%d",&number1);
	printf("ikkinchi sonni kiriting: ");
	scanf("%d",& number2);
	int total =number1+number2;
	if (total%2==0)
{
	printf("Sonlarning yig'indisi juft sondir: %d\n", number2);
}
	else
{
	printf("Sonlarning yi'gindisi toq sondir: %d\n", number1);
}
	return 0;
}
