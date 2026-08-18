#include <stdio.h>
	int calendar( int age)
{
	int  year=2026-age;
	return year;
}
	int main()
{
	int old;
	printf("Yoshingizni kiriting: ");
	scanf("%d",&old);
	printf("Sizning tug'ilgan yilingiz: %d",calendar(old));
	return 0;
}
