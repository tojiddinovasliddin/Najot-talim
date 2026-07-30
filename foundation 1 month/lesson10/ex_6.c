#include <stdio.h>
int main()
{
	int sum=0;
	for(int i=1; i<=19; i++)
{
	printf("%d |",i);
	sum= sum+i;
}
printf("Sonlarning yiginidisi:%d", sum);
return 0;
}
