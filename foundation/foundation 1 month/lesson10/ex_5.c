#include <stdio.h>
int main()
{
	int  a,b;
	printf("A ni kiriting: ");
	scanf("%d",&a);
	printf("B ni kiriting: ");
	scanf("%d",&b);
	for(int i=a;i <=b; i++)
{
	printf("%d |", i);
}
return 0; 
}
