//Yilning kabisa ekanligini aniqlash
#include <stdio.h>
void check(int year)
{
	if( year % 400 ==0)
	{
	puts("Kabisa ");
	}
	else if ( year  % 100 ==0)
	{
	puts("Kabisa emas");
	}
	else if( year % 4 ==0)
	{
	puts("Kabisa");
	}
	else 
	{
	puts("Kabisa emas");
	}
}
int main()
{
	int n;
	printf("Yilni kiriting: ");
	scanf("%d",&n);
	check(n);
	return 0;
}
