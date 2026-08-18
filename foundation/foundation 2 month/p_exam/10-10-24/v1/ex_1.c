#include <stdio.h>
#include <stdlib.h>
int check(int x,int y)
{
	return x*y;
}

int main()
{
	int a,b;
	printf("A  ni kiriting: ");
	scanf("%d",&a);
	printf("B ni kiriting: ");
	scanf("%d",&b);
	printf("Sonlarning ozaro kopaymatisi: %d",check(a,b));

}
