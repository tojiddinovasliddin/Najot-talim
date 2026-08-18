#include <stdio.h>
#include <stdlib.h>

int main()
{
	int last;
	int n;
	int total=0,sum=0;
	printf("Soni kiriting: ");
	scanf("%d",&n);
	while(n>0)
	{
	last=n%10;
	if(last %2 ==1)
	{
		sum=last*last;
		total+=sum;
	}
	n=n/10;
	}
	printf("%d",total);
}
