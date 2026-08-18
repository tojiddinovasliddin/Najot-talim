#include <stdio.h>
int  max(int a, int b)
{
	if(a>b)
	{
	return a;
	}
	else
	return b;
}

int main()
{
	int x,y;
	printf("x va y ni kiriting: ");
	scanf("%d%d",&x,&y);
	printf("%d",max(x,y));
	return 0;
}

