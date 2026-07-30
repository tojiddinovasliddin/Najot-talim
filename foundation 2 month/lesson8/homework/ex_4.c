#include <stdio.h>
int check(int k)
{
	if(k==1 || k==0)
	return  k;
	return k*check(k-1);

}

int main()
{
	int n;
	printf("N ni kiriting: ");
	scanf("%d",&n);
	int d=check(n);
	printf("%d", d);
}
