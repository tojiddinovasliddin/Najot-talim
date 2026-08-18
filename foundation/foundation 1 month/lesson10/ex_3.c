#include <stdio.h>
int main()
{
	int a,step;
	printf("A - ni kiriting: ");
	scanf("%d", &a);
	 printf("step - ni kiriting: ");
         scanf("%d", &step);
	for(int i=a; i<=15; i=i+step)
{
	printf("%d |",i);
}
}
