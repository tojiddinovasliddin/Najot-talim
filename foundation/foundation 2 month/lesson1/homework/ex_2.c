#include <stdio.h>
	int max( int a,int b)
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
	int r1,r2;
	printf("R1 va R2 ni kiriting: ");
	scanf("%d%d",&r1,&r2);
	printf("Eng katta son: %d",max(r1,r2));
	return 0;
}
