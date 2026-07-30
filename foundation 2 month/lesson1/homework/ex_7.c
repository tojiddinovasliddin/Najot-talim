#include <stdio.h>
void check(char c)
{
	if(c>=0 && c<=9)
	printf("Digit");
	else 
	printf("Not a digit");
}
int main()
{
	int a;
	printf("Raqamni kiriting: ");
	scanf("%d",&a);
	check(a);
	return 0;
}
