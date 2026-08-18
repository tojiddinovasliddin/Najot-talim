// Musbat yoki manfiy sonni aniqlash
#include <stdio.h>
void check(int num)
{
	if(num>0)
	{
	printf("Musbat");
	}
	else if(num<0)
	{
	puts("Manfiy");
	}	
	else
	{
	printf("Nol");
	}
}
int main()
{
	int a;
	printf("Sonni kirtiting: ");
	scanf("%d",&a);
	 check(a);
	return 0;
}

