#include <stdio.h>

int check(int k)
{
	if(k<10)
	return k ;
	return k%10 +check(k/10);
}
int main()
{
	int m;
	printf("N ni kiriting: ");
	scanf("%d",&m);
	int d=check(m);
	printf("%d",d);
}

