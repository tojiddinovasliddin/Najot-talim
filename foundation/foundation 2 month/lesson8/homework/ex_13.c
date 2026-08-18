#include <stdio.h>
#include <stdlib.h>
int fibonachchi(int n)
{
	if (n == 1 || n  == 2)
		return n - 1;
	return fibonachchi(n - 1) + fibonachchi(n - 2);
}
int main()
{
	int a;
	printf("Kiriting:  ");
	scanf("%d",&a);
	int k=fibonachchi(a);
	printf("%d",k);
	return 0;
}

