#include <stdio.h>
int main()
{
	int i,step;
	printf("Soni kiriting: ");
	scanf("%d",&i);
	printf("Stepni kiriting: ");
	scanf("%d",&step);
	while(i<=15)
{
	printf("%d | ",i);
	i=i+step;
	
}
return 0;
}
