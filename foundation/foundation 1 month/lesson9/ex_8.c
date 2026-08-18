#include <stdio.h>
int main()
{
	int n,sum=0,book=1;
	printf("N ni kiriting: ");
	scanf("%d", &n);
	while( book<=n)
{
	sum = sum + book * book;
	book++;
}
	printf("%d", sum);
return 0;
}
