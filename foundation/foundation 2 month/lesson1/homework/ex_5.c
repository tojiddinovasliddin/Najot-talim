#include <stdio.h>
int value(int num)
{
	if(num>=0)
	{
	}
	else
	num=num * -1;
	return num;
}
	int main()
{
	int n;
	printf("Sonni kiriting: ");
	scanf("%d",&n);
	printf("%d",value(n));
	return 0;
}
