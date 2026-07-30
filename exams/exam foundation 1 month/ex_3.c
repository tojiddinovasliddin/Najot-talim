#include <stdio.h>
int main()
{
	int a,b,ctn=0;
	printf("Sonni kiriting: ");
	scanf("%d",&a);
	while(a>0)
	{
	b = a % 10;
	if(b % 2 == 0)
	{
	printf("%d| ",b);
	ctn++;
	}
	a=a/10;
	}
	printf("\nCount: %d",ctn);

}
