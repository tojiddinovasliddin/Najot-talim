#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Sonni kiriting: ");
	scanf("%d",&a);
	if(a>99 && a<1000)
{
	b=a%10;
	c=a/10%10;
	d=a/100;
	int f=b+c+d;
	printf("Sonlarning yigindisi: %d",f); 	
}
	else
	printf("3 xonalari son kiriting: ");
}
