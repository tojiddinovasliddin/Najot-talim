#include <stdio.h>
int calculator( int a, int b,char c)
{
	switch(c)
	{	
	case '+': return a+b; break;
	}
}
int main()
{
	int x,y;
	printf("x va y ni kiriting: ");
	scanf("%d%d",&x,&y);
	printf("Sonlarning kuchirishi:%d", calculator(x,y));
	return 0;
}
