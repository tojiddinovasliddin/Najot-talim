//Eng katta raqamni topish
#include <stdio.h>
int mix(int num)
{
int last,max=0;

	while(num>0)
	{
	last=num%10;
	if(max<last)
	{
	max=last;
	}
	num=num/10;
	}	
	return max;
}
int main()
{
	int x;
	printf("sonni kriting: ");
	scanf("%d",&x);
	printf("%d",mix(x));
}
