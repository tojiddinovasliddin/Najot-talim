//Sonlar ayirmasini hisoblash
#include <stdio.h>
int num(int a,int b)
{
	return a-b;
}
int main()
{
	int x,y;
	printf("x va y ni kiriting: ");
	scanf("%d%d",&x,&y);
	printf("Sonlarning ayirmasi: %d",num(x,y));
	return 0;
}
