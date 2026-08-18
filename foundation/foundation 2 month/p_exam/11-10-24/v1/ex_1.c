#include <stdio.h>
int check(int a,int b)
{
	return a*b;
}
int main()
{
	int x,y;
	printf("X va Y ni kiriting: ");
	scanf("%d%d",&x,&y);
	printf("Yigindi: %d",check(x,y));
}
