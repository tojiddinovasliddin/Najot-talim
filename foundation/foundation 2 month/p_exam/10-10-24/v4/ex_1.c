#include <stdio.h>
int check(int a,int b)
{
	if(a>b)
	return a;
	else 
	return b;
}
int main()
{
	int x,y;
	printf("X va Y ni kiriting: ");
	scanf("%d%d",&x,&y);
	int ans=check(x,y);
	printf("Eng katta son: %d",ans);
}
