#include <stdio.h>
int main()
{
	int price;
	printf("Iltimos  olma narxi kiriting: ");
	scanf("%d", &price);
	int money;
	printf("iltimos jami pulingizni kiriting: ");
	scanf("%d",&money);
	int total = money/price;
	printf("Jami olmalar: %d\n",total);
	return 0;
}
