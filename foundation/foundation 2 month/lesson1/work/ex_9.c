//Son raqamlari yig‘indisini topish
#include <stdio.h>
int  sum(int num)
{
	int total=0,last;
	while(num>0)
	{
	last =num % 10;
	total=total+last;
		
 	num=num/10;
	}
	return total;
}
int main()
{
	int a;
	printf("Sonni kiriting: ");
	scanf("%d",&a);
	printf("%d",sum(a));
	return 0;
}
