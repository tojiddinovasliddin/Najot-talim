//3 xonali palindrome soni tekshirish
#include <stdio.h>
int num(int n)
{
	int a,b,c;
	a=n%10;
	b=n/10%10;
	c=n/100;
	if (a==n%10 && b=n/10%10 && c= n/100)
	{
	puts("son uzaro palindrome");
	}
	else 
	{
	puts("Son palindrome emas");
	}
}
int main()
{
	int s;
	printf("3 xonlari son kiriting: ");
	scanf("%d",&s);
	printf("%d",num(s));
	return 0;
}
