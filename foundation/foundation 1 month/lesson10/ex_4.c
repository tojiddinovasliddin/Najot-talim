#include <stdio.h>
int main()
{
	int a;
	printf("A  ni kiriting: ");
	scanf("%d",&a);
	for(int i=a; i<=15; i++)
{
	printf("%d |",i);
}
	for(int b=a; b>=15; b--)
{
	printf("%d |",b);
}
return 0;
}
