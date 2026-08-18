#include <stdio.h>
int main()
{
	int a;
	printf("Sonni kiriting: ");
	scanf("%d",&a);
	while(a<=15)
{
a++
}
	if(a<=15)
{
	printf("%d | ", a);
	a=a+1;
}

	 else if(a>=15)
{
	printf("%d | ", a);
	a--;
}
	else
	printf("%d",a);
 
	return 0;	
}
