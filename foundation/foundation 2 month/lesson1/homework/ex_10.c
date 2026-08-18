#include  <stdio.h>
void  status(int num)
{
	if(num<2)
	{
	printf("not prime");
	}
	for(int i=1;i<=num;i++)
	{
		if(num %i==0)
		{
			puts("Not prime");
		return;	
	}
		else 
			{	
			printf("prime");
	return;		
	}
	}
}
int main()
{
	int a;
	printf("Sonni kiriting: ");
	scanf("%d",&a);
	status(a);
	return 0;
}
