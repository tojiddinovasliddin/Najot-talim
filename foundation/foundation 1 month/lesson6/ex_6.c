#include <stdio.h>
int main()
{
	int number;
	printf("iltimos 2 xonali son kiriting: ");
	scanf("%d",&number);	
	int a=number/10;
	int b=number%10;
	int d=(b*10)+a;
	printf( "Soning teskari : %d\n",d);	
	return 0; 
}
