#include <stdio.h>
int main()
{
	int last, number,max=0;
	printf("Soni kiriting: ");
	scanf("%d",&number);
	do{
	last=number %10;
	if( last % 2 == 1)
	{
	if(max<last)
	{
	max=last;
	}
	}
	number = number / 10;
	}while(number>0);
	printf("%d", max);
}

