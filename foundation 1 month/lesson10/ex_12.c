#include <stdio.h>
int main()
{
	int product,price,sum=0,total;
	printf("Nechta maxsulotni hisoblamoqchisiz: ");
	scanf("%d",&product);
	for( int i=1; i<=product; i++)
{
	printf("%d-ni narxini kiriting: ", i);
	scanf("%d",&price);
	sum=price+sum;
}
	total=sum-sum/10;
	printf("Maxsulolarningt asl narxi: %d\n", sum);
	printf("Maxsulotning chegirmasi bilan xisoblaydiganda siz tulaydigan summa: %d\n", total);
}
