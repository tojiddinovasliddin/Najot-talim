#include <stdio.h>
int check(int x,int y,int z)
{
	if(x>y && x>z)
	return x;
	else if(y>z && y>x)
	return y;
	else
	return z;
}
int chec(int x,int y,int z)
{
	if(x<y && x<z)
	return x;
	else if(y<z && y<x)
	return y;
	else
	return z;

}

int main()
{
	int a,b,c;
	printf("A ni kiriting: ");
	scanf("%d",&a);
	printf("B ni kirtiing: ");
	scanf("%d",&b);
	printf("C ni kirting: ");
	scanf("%d",&c);
	printf("MAX= %d\n",check(a,b,c));
	 printf("MIN= %d\n",chec(a,b,c));
return 0;
}
