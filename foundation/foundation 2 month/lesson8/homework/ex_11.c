#include <stdio.h>
void check(int x,int y)
{
	int i;
	int j;
	for(i=1; i<x;i++)
	{
		if(x%i==0)
	
		for(j=0;j<y;j++)
		{
		if(y%j==0)
		if(i==j)
		printf("%d ",j);
		}
	
	}
} 

int main()
{
	int a,b;
	printf("A VA B ni kriting: ");
	scanf("%d%d",&a,&b);
	check(a,b);
}
