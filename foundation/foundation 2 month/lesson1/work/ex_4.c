//4-masala: Uchburchak perimetrini hisoblash
#include <stdio.h>
int per( int a,int b,int c)
{
	int p=a+b+c;
	return p;
}
int main()
{
	int x,y,z;
	printf("Uchburchakning barcha tamoni kiriting: ");
	scanf("%d%d%d",&x,&y,&z);
	printf("uchburchakning perimentri: %d", per(x,y,z));
	return 0;
}
