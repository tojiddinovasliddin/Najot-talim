#include <stdio.h>
#include <stdlib.h>
int show(int x,int y)
{
	if(y==1)
	return  x;
	return x*show(x,y-1);
}

int main()
{
	int a,b;
	printf("sonni kiriting: ");
	scanf("%d",&a);
	printf("Darajani kiriting: ");
	scanf("%d", &b);
	int d=show(a,b);
	printf("%d",d);
}

